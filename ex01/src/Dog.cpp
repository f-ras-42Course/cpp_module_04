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
: brain_(new Brain)
{
	std::cout << "Dog constructor called\n";
	type_ = "Dog"; 
}
Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called\n";
	type_ = other.type_;
	brain_ = new Brain;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
	{
		type_ = other.type_;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof, wooffff, wooffffffffff\n";
}
