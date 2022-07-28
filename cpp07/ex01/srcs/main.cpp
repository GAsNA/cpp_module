/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:45:11 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 13:11:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	{
		std::string *tab = new std::string[2];
		tab[0] = "Hello World!";
		tab[1] = "Welcome to 42!";
		::iter(tab, 2, &::aff);
	}
	std::cout << "--------------------------------------------" << std::endl;
	{
		const int *tab = new int[3];
		tab[0] = 42;
		tab[1] = 7;
		tab[2] = 9;
		::iter(tab, 3, &::aff);
		::iter(tab, 3, &::square);
		std::cout << "\nAfter square: " << std::endl;
		::iter(tab, 3, &::aff);
	}
}
