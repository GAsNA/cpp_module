/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:17:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/09 17:05:07 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
/*	try
	{
		Bureaucrat b = Bureaucrat("B", 1);
		ShrubberyCreationForm f = ShrubberyCreationForm("F", "T");

		std::cout << std::endl;

		b.signForm(&f);
		b.executeForm(f);

		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl << "--------------------------" << std::endl;
*/
	ShrubberyCreationForm sform("T");
	RobotomyRequestForm rform("T");
	PresidentialPardonForm pform("T");
	(void) sform;
	(void) rform;
	(void) pform;

	return (0);
}
