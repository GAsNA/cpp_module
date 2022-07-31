/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:49:42 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/31 15:54:44 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 5

int main()
{
	Array<int>		intA;
	Array<std::string>	stringA(SIZE);

	stringA[0] = "Hello World!";
	stringA[1] = "Welcome to 42.";
	stringA[2] = "Another sentence.";
	
	std::cout << "intA size: " << intA.size() << std::endl;
	std::cout << "stringA size: " << stringA.size() << std::endl;

	Array<std::string>	cpyStringA;
	cpyStringA = stringA;
	cpyStringA[3] = "Final sentence.";
	cpyStringA[0] = "Replace sentence.";

	std::cout << "---------------------" << std::endl;

	try {
		std::cout << stringA[42] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "---------------------" << std::endl;
	
	try {
		std::cout << stringA[-42] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }
	
	std::cout << "---------------------" << std::endl;

	try {
		for (int i = 0; i < SIZE; i++)
			std::cout << stringA[i] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "---------------------" << std::endl;

	try {
		for (int i = 0; i < SIZE; i++)
			std::cout << cpyStringA[i] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << "---------------------" << std::endl;

	try {
		for (int i = 0; i < 5; i++)
			std::cout << intA[i] << std::endl;
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }
}
