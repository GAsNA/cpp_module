/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:17:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 16:49:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat b = Bureaucrat("B", 42);
		ShrubberyCreationForm f = ShrubberyCreationForm("F");

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;
	
	try
	{
		Bureaucrat b = Bureaucrat("B", 42);
		ShrubberyCreationForm f = ShrubberyCreationForm("F");

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;

		b.signForm(&f);

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;
	
	try
	{
		Bureaucrat b = Bureaucrat("B", 42);
		ShrubberyCreationForm f = ShrubberyCreationForm("F");

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;

		b.signForm(&f);

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat b = Bureaucrat("B", 42);
		Bureaucrat c = Bureaucrat("C", 42);
		ShrubberyCreationForm f = ShrubberyCreationForm("F");

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;

		b.signForm(&f);

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;

		c.signForm(&f);

		std::cout << std::endl;

		std::cout << f << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;
	
	return (0);
}
