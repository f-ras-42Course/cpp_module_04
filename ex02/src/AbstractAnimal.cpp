/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AbstractAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/10/23 16:52:28 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal()
{
	std::cout << "AbstractAnimal constructor called\n";
	type_ = "AbstractAnimal";
}

AbstractAnimal::~AbstractAnimal()
{
	std::cout << "AbstractAnimal deconstructor called\n";
}

AbstractAnimal::AbstractAnimal(const AbstractAnimal& other)
{
	std::cout << "AbstractAnimal copy constructor called\n";
	type_ = other.type_;
}

AbstractAnimal& AbstractAnimal::operator=(const AbstractAnimal& other)
{
	std::cout << "AbstractAnimal copy assignment operator called\n";
	if (this != &other)
	{
		type_ = other.type_;
	}
	return *this;
}

void AbstractAnimal::makeSound() const
{
	std::cout << "The AbstractAnimal makes a sound\n";
}

const std::string& AbstractAnimal::getType() const
{
	return this->type_;
}
