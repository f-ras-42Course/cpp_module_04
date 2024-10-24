/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AbstractAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/10/24 18:34:25 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AbstractAnimal_HPP
# define AbstractAnimal_HPP

# include <iostream>
# include <string>
# include <memory>

class AbstractAnimal
{
	public:
		virtual ~AbstractAnimal();
		virtual void makeSound() const = 0;
	protected:
		std::string type_;
		
		AbstractAnimal();
		AbstractAnimal(const AbstractAnimal& other);
		AbstractAnimal& operator=(const AbstractAnimal& other);
		const std::string& getType() const;
};

#endif