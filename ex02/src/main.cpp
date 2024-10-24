/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/01 13:02:56 by fras          #+#    #+#                 */
/*   Updated: 2024/10/24 18:35:39 by fras          ########   odam.nl         */
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
		std::cout << "Test 1:\n";
		const Animal* freddie = new Dog();
		const Animal* simba = new Cat();
		freddie->makeSound();
		simba->makeSound();
		delete freddie;
		delete simba;
	}
	{
		std::cout << "\nTest 2:\n";
		const size_t animal_quantity = 4;
		Animal *animals[animal_quantity];
		for (size_t i = 0; i < animal_quantity; i++)
		{
			if (i < animal_quantity / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();

		}
		for (size_t i = 0; i < animal_quantity; i++)
		{
			delete animals[i];
		}
	}
	{
		std::cout << "\nTest 3:\n";
		Brain lala;
		Brain lolol;
		lala.setIdea("Thought 1");
		lala.setIdea("Thought 2");
		lala.printIdeas();
		lolol = lala;
		lolol.printIdeas();
	}
	{
		std::cout << "\nTest 4:\n";
		Cat simba;
		Cat rambo;
		std::cout << "----- Print ideas 1 -----\n";
		simba.printIdeas();
		rambo.printIdeas();
		std::cout << "----- Set ideas! -----\n";
		simba.setIdea("Woow, what a world.");
		simba.setIdea("Meeoww World!");
		std::cout << "----- Print ideas 2 -----\n";
		simba.printIdeas();
		rambo.printIdeas();
		std::cout << "----- Copy cat! -----\n";
		rambo = simba;
		std::cout << "----- Print ideas 3 -----\n";
		simba.printIdeas();
		rambo.printIdeas();
		std::cout << "----- Make new cat via copy! (Mufasa) -----\n";
		Cat mufasa(rambo);
		std::cout << "----- Print ideas 4 -----\n";
		mufasa.printIdeas();
	}
	// Should not compile:
	// {
	// 	std::cout << "\nTest 5:\n";
	// 	const Animal* meta = new Animal();
	// 	delete meta;
	// }
	return 0;
}
