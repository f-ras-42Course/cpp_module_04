/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/09/09 12:02:51 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"
# include <memory>

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat() override;
		void makeSound() const override;
	private:
		std::unique_ptr<Brain> brain_;
};

#endif