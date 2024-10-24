/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/26 18:23:07 by fras          #+#    #+#                 */
/*   Updated: 2024/10/23 16:52:16 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
: total_stored_(0)
{
	std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called\n";
	std::copy(std::begin(other.ideas_), std::end(other.ideas_), ideas_);
	total_stored_ = other.total_stored_;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &other)
	{
		std::copy(std::begin(other.ideas_), std::end(other.ideas_), ideas_);
		total_stored_ = other.total_stored_;
	}
	return *this;
}

void Brain::setIdea(const std::string idea)
{
	if (total_stored_ == capacity)
	{
		std::cout << "Brain is full, cannot carry more ideas..\n";
		return ;
	}
	ideas_[total_stored_] = idea;
	total_stored_++;
}

void Brain::printIdeas() const
{
	if (total_stored_ == 0)
	{
		std::cout << "Brain is empty, does not carry any ideas..\n";
		return ;
	}
	std::cout << "[total ideas]\n";
	for (size_t i = 0; i < total_stored_; i++)
	{
		std::cout << "idea " << i << ": " << ideas_[i] << "\n";
	}
	std::cout << "[/total ideas]\n";
}
