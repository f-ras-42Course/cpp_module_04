/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/26 18:21:48 by fras          #+#    #+#                 */
/*   Updated: 2024/10/23 16:52:40 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		void setIdea(const std::string idea);
		void printIdeas() const;
	private:
		size_t 				total_stored_;
		static const size_t	capacity = 100;
		std::string 		ideas_[capacity];
};

#endif