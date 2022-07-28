/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:17:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 15:17:41 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b = Bureaucrat("B", 1);
		ShrubberyCreationForm f = ShrubberyCreationForm("T");

		std::cout << std::endl;

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat b = Bureaucrat("B", 150);
		ShrubberyCreationForm f = ShrubberyCreationForm("T");

		std::cout << std::endl;

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat b = Bureaucrat("B", 139);
		ShrubberyCreationForm f = ShrubberyCreationForm("T");

		std::cout << std::endl;

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat b = Bureaucrat("B", 137);
		ShrubberyCreationForm f = ShrubberyCreationForm("T");

		std::cout << std::endl;

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;
	
	try
	{
		Bureaucrat b = Bureaucrat("B", 1);
		RobotomyRequestForm f = RobotomyRequestForm("T");

		std::cout << std::endl;

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;

	try
	{
		Bureaucrat b = Bureaucrat("B", 1);
		PresidentialPardonForm f = PresidentialPardonForm("T");

		std::cout << std::endl;

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;
	return (0);
}
