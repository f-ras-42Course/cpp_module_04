/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/01 13:02:56 by fras          #+#    #+#                 */
/*   Updated: 2024/08/26 17:22:21 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "Test 1\n";
		const Animal* meta = new Animal();
		const Animal* cat = new Cat();
		const Animal* dog = new Dog();
		std::cout << cat->getType() << " = cat->getType()\n";
		std::cout << dog->getType() << " = dog->getType()\n";
		std::cout << "Cat: "; cat->makeSound();
		std::cout << "Dog: "; dog->makeSound();
		std::cout << "Animal: "; meta->makeSound();
		delete meta;
		delete cat;
		delete dog;
	}
	{
		std::cout << "\nTest 2\n";
		Dog dog1;
		Dog dog2;
		dog1 = dog2;
	}
	{
		std::cout << "\nTest 3\n";
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		std::cout << meta->getType() << " = meta->getType()\n";
		std::cout << cat->getType() << " = cat->getType()\n";
		std::cout << "Animal: "; meta->makeSound();
		std::cout << "Cat: "; cat->makeSound();
		delete meta;
		delete cat;
	}
	return 0;
}
