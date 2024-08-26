/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/05/30 17:00:55 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		~Dog() override;
		Dog& operator=(const Dog& other);
		void makeSound() const override;
};

#endif