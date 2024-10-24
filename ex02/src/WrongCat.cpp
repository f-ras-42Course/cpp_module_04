/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:08 by fras          #+#    #+#                 */
/*   Updated: 2024/05/30 17:01:58 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called\n";
	type_ = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called\n";
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor called\n";
	type_ = other.type_;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meeooowww, meeeoowww\n";
}
