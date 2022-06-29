/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:33:18 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 17:34:04 by rleseur          ###   ########.fr       */
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

/*	{
		Brain *b = new Brain();
	(void)b;
	}*/
	return (0);
}
