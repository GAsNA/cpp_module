/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:45:59 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/09 16:41:35 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "An Intern has been created." << std::endl;
}

Intern::Intern(Intern const & cpy)
{
	std::cout << "Copy constructor called. (Intern)" << std::endl;
	if (this == &cpy)
		return ;
}

Intern	&Intern::operator=(Intern const & rhs)
{
	std::cout << "Copy constructor called. (Intern)" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

Intern::~Intern()
{
	std::cout << "An Intern has been destroyed." << std::endl;
}

static Form *createPPF(std::string target) {return (new PresidentialPardonForm(target));};
static Form *createRRF(std::string target) {return (new RobotomyRequestForm(target));};
static Form *createSCF(std::string target) {return (new ShrubberyCreationForm(target));};

Form	*Intern::makeForm(std::string nameForm, std::string target)
{
	Form *f;
	typedef Form* (*func)(std::string target);
	typedef struct {std::string nameForm; func func;} Types;

	Types forms[] = 
	{
		{"presidential pardon", &createPPF},
		{"robotomy request", &createRRF},
		{"shrubbery creation", &createSCF},
	};

	f = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (forms[i].nameForm == nameForm)
		{
			f = forms[i].func(target);
			std::cout << "Intern creates " << nameForm << "." << std::endl;
			return (f);
		}
	}
	std::cout << "Intern cannot create a form of name '" << nameForm << "'." << std::endl;
	return (f);
}
