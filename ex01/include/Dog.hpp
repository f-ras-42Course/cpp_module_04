/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/09/09 12:02:56 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"
# include <memory>

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog() override;
		void makeSound() const override;
	private:
		std::unique_ptr<Brain> brain_;
};

#endif