/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/26 18:23:07 by fras          #+#    #+#                 */
/*   Updated: 2024/08/26 18:34:02 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
	type_ = "Brain";
}
Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called\n";
	type_ = other.type_;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment operator called\n";
	type_ = other.type_;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called\n";
}
