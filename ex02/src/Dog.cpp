/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/10/25 17:16:52 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
: brain_(new Brain)
{
	std::cout << "Dog constructor called\n";
	type_ = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called\n";
	delete brain_;
}

Dog::Dog(const Dog& other)
: brain_(new Brain)
{
	std::cout << "Dog copy constructor called\n";
	type_ = other.type_;
	*brain_ = *other.brain_;
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

void Dog::makeSound() const
{
	std::cout << "Woof, wooffff, wooffffffffff\n";
}

void Dog::setIdea(const std::string idea)
{
	brain_->setIdea(idea);
}

void Dog::printIdeas() const
{
	brain_->printIdeas();
}
