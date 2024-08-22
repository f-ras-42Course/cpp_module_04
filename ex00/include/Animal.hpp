/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/08/22 17:44:04 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

// Todo : WrongCat // WrongDog
class Animal
{
	protected:
		std::string type_;
	public:
		Animal();
		Animal(const Animal& other);
		virtual ~Animal();
		Animal& operator=(const Animal& other);
		virtual void makeSound() const;
		const std::string& getType() const;	
};

#endif