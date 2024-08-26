/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/08/26 14:35:37 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type_;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other);
		void makeSound() const;
		const std::string& getType() const;	
};

#endif