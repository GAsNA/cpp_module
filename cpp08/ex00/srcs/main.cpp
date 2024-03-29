/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:36:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 12:11:38 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(7);
	v.push_back(5);
	v.push_back(16);
	v.push_back(42);
	v.push_back(8);

	std::list<int> l;
	l.push_back(7);
	l.push_back(5);
	l.push_back(16);
	l.push_back(42);
	l.push_back(8);

	try {
		std::cout << *easyfind(v, 42) << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "------------------------------" << std::endl;
	
	try {
		std::cout << *easyfind(v, 21) << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }	
	
	std::cout << "------------------------------" << std::endl;
	
	try {
		std::cout << *easyfind(l, 42) << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }	
	
	std::cout << "------------------------------" << std::endl;

	try {
		std::cout << *easyfind(l, 21) << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }	
}
