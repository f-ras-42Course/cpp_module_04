/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/08/26 18:24:48 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called\n";
	type_ = "Animal";
}
Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called\n";
	type_ = other.type_;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor called\n";
}

void Animal::makeSound() const
{
	std::cout << "The Animal makes a sound\n";
}

const std::string& Animal::getType() const
{
	return this->type_;
}
