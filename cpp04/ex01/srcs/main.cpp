/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:33:18 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 10:47:04 by rleseur          ###   ########.fr       */
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

		tab[0]->getBrain().set_idea("I'm a first idea.");
		tab[1]->getBrain().set_idea("I'm another idea.");
		tab[0]->getBrain().set_idea("I'm a last idea.");

		std::cout << tab[0]->getBrain().get_one_idea(0) << std::endl;
		std::cout << tab[0]->getBrain().get_one_idea(101) << std::endl;
		std::cout << tab[0]->getBrain().get_one_idea(42) << std::endl;
		std::cout << tab[0]->getBrain().get_one_idea(-42) << std::endl;
		std::cout << tab[0]->getBrain().get_one_idea(1) << std::endl;
		std::cout << tab[1]->getBrain().get_one_idea(0) << std::endl;

		std::cout << std::endl;

		for (int i = 0; i < n; i++)
			delete tab[i];
	}
	return (0);
}
