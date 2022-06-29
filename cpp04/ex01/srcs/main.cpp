/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:33:18 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 23:23:28 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << std::endl;
	
		std::cout << "dog type: " << dog->getType() << std::endl;
		std::cout << "cat type: " << cat->getType() << std::endl;
		std::cout << "meta type: " << meta->getType() << std::endl;

		std::cout << std::endl;

		dog->makeSound();
		cat->makeSound();
		meta->makeSound();

		std::cout << std::endl;
	
		delete meta;
		delete dog;
		delete cat;
	}
	
	std::cout << std::endl << "----------------------" << std::endl << std::endl;

	{
		const WrongAnimal *wmeta = new WrongAnimal();
		const WrongAnimal *wcat = new WrongCat();

		std::cout << std::endl;

		std::cout << "wcat type: " << wcat->getType() << std::endl;
		std::cout << "wmeta type: " << wmeta->getType() << std::endl;

		std::cout << std::endl;

		wcat->makeSound();
		wmeta->makeSound();
	
		std::cout << std::endl;
	
		delete wmeta;
		delete wcat;
	}

	std::cout << std::endl << "----------------------" << std::endl << std::endl;

	{
		int n = 2;
		const Animal *tab[n];
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}
		
		std::cout << std::endl;

		tab[0]->getBrain()->set_idea("I'm a first idea.");
		tab[1]->getBrain()->set_idea("I'm another idea.");
		tab[0]->getBrain()->set_idea("I'm a last idea.");
		
		std::cout << tab[0]->getBrain()->get_one_idea(0) << std::endl;
		std::cout << tab[0]->getBrain()->get_one_idea(42) << std::endl;
		std::cout << tab[0]->getBrain()->get_one_idea(1) << std::endl;
		std::cout << tab[1]->getBrain()->get_one_idea(0) << std::endl;

		std::cout << std::endl;

		for (int i = 0; i < n; i++)
			delete tab[i];
	}
	return (0);
}
