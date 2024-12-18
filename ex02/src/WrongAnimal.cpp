/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/10/24 18:39:16 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called\n";
	type_ = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called\n";
	type_ = other.type_;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal makes a sound\n";
}

const std::string& WrongAnimal::getType() const
{
	return this->type_;
}
