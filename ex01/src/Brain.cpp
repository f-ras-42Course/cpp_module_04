/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/26 18:23:07 by fras          #+#    #+#                 */
/*   Updated: 2024/09/02 13:51:22 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}
Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called\n";
	std::copy(std::begin(other.ideas_), std::end(other.ideas_), ideas_);
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &other)
	{
		std::copy(std::begin(other.ideas_), std::end(other.ideas_), ideas_);
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called\n";
}
