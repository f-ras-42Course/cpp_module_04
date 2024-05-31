/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/05/31 18:05:12 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(/* args */)
{
	std::cout << "Animal constructor called\n";
	type_ = "ANIMAL";
}
Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor called\n";
	type_ = other.type_;
}
Animal::~Animal()
{
	std::cout << "Animal deconstructor called\n"
}
Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}
