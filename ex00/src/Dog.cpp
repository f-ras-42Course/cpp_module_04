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

Dog::Dog(/* args */)
{
	std::cout << "Dog constructor called\n";
	type_ = "DOG"; 
}
Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called\n";
	type_ = other.type_;
}
Dog::~Dog()
{
	std::cout << "Cat deconstructor called\n";
}
Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}
