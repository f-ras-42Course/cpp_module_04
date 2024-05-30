/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/30 16:58:03 by fras          #+#    #+#                 */
/*   Updated: 2024/05/30 17:00:55 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

class Cat
{
private:
	/* data */
public:
	Cat(/* args */);
	Cat(const Cat& animal);
	~Cat();
	Cat& operator=(const Cat& other);
};

#endif