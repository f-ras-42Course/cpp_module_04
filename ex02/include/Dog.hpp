/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/10/24 18:38:09 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Dog: public AbstractAnimal
{
	public:
		Dog();
		~Dog() override;
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		void makeSound() const override;
		void setIdea(const std::string idea);
		void printIdeas() const;
	private:
		Brain* brain_;
};

#endif