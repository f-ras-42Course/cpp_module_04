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
	type_ = "CAT";
}
Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called\n";
	type_ = other.type_;
}
Cat::~Cat()
{
	std::cout << "Cat deconstructor called\n"
}
Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}
