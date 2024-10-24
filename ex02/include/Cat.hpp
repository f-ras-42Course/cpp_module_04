/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/10/24 18:38:09 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include <iostream>
# include "AbstractAnimal.hpp"

class Cat: public AbstractAnimal
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
		Brain* brain_;
};

#endif