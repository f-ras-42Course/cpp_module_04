/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/10/24 18:34:25 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# include <memory>

class Animal
{
	public:
		virtual ~Animal();
		virtual void makeSound() const = 0;
	protected:
		std::string type_;
		
		Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		const std::string& getType() const;
};

#endif