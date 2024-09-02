/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/05/30 17:01:58 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called\n";
	type_ = "Cat";
	try
	{
		brain_ = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memory allocation failed: " << e.what() << '\n';
		brain_ = nullptr;
	}
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called\n";
	type_ = other.type_;
	try
	{
		brain_ = new Brain();
		*brain_ = *other.brain_;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memory allocation failed: " << e.what() << '\n';
		brain_ = nullptr;
	}
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &other)
	{
		type_ = other.type_;
		*brain_ = *other.brain_;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called\n";
	delete brain_;
}

void Cat::makeSound() const
{
	std::cout << "Meeooowww, meeeoowww\n";
}
