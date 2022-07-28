/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:17:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 15:46:27 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		Intern i;
		Form *f;

		std::cout << std::endl;

		f = i.makeForm("robotomy request", "Bender");
		delete f;
	}

	std::cout << "------------------------------" << std::endl;

	{
		Intern i;
		Form *f;

		std::cout << std::endl;

		f = i.makeForm("presidential pardon", "Zaphod");
		delete f;
	}

	std::cout << "------------------------------" << std::endl;

	{
		Intern i;
		Form *f;

		std::cout << std::endl;

		f = i.makeForm("shrubbery creation", "Shrub");
		delete f;
	}

	std::cout << "------------------------------" << std::endl;

	{
		Intern i;
		Form *f;

		std::cout << std::endl;

		f = i.makeForm("test", "test");
		delete f;
	}
	return (0);
}
