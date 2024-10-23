/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/10/23 16:52:43 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat() override;
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		void makeSound() const override;
		void setIdea(const std::string idea);
		void printIdeas() const;
	private:
		std::unique_ptr<Brain> brain_;
};

#endif