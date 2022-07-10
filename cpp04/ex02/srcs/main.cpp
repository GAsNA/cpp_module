/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:33:18 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/10 13:05:03 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	{
		const Animal *d = new Dog();
		const Animal *c = new Cat();
	//	const Animal *a = new Animal();

		std::cout << std::endl;

		delete d;
		delete c;
	//	delete a;
	}
	return (0);
}
