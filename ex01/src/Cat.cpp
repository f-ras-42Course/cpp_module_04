/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/10/23 16:52:03 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
: brain_(std::make_unique<Brain>())
{
	std::cout << "Cat constructor called\n";
	type_ = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called\n";
}

Cat::Cat(const Cat& other)
: brain_(std::make_unique<Brain>())
{
	std::cout << "Cat copy constructor called\n";
	type_ = other.type_;
	*brain_ = *other.brain_;
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

void Cat::makeSound() const
{
	std::cout << "Meeooowww, meeeoowww\n";
}

void Cat::setIdea(const std::string idea)
{
	brain_->setIdea(idea);
}

void Cat::printIdeas() const
{
	brain_->printIdeas();
}
