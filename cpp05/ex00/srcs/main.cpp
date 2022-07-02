/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:17:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/02 18:14:42 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a = Bureaucrat("A", 42);
		Bureaucrat b = Bureaucrat("B", 1);
		Bureaucrat c = Bureaucrat("C", 150);
	
		std::cout << std::endl;

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		std::cout << std::endl;	
	
		for (int i = 0; i < 25; i++)
			a.decrementGrade();

		std::cout << a << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat d = Bureaucrat("D", 0);

		std::cout << std::endl;

		std::cout << d << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat e = Bureaucrat("E", 151);

		std::cout << std::endl;

		std::cout << e << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat f = Bureaucrat("F", 150);

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;

		f.decrementGrade();

		std::cout << f << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat g = Bureaucrat("G", 1);

		std::cout << std::endl;

		std::cout << g << std::endl;

		std::cout << std::endl;

		g.incrementGrade();

		std::cout << g << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
