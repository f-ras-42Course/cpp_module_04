/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/05/30 17:01:58 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called\n";
	type_ = "Dog"; 
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

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called\n";
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

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
	{
		type_ = other.type_;
		*brain_ = *other.brain_;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called\n";
	delete brain_;
}

void Dog::makeSound() const
{
	std::cout << "Woof, wooffff, wooffffffffff\n";
}
