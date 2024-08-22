/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/01 13:02:56 by fras          #+#    #+#                 */
/*   Updated: 2024/08/22 17:43:13 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();
		std::cout << cat->getType() << " = cat->getType()\n";
		std::cout << dog->getType() << " = dog->getType()\n";
		cat->makeSound();
		dog->makeSound();
		meta->makeSound();
		delete cat;
		delete meta;
		delete dog;
	}
	{
		Dog dog1;
		Dog dog2;
		dog1 = dog2;
	}
	return 0;
}
