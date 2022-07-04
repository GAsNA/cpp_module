/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/04 12:46:06 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (checkGrade(grade))
		std::cout << "A Bureaucrat has been created." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
	std::cout << "Copy constructor called. (Bureaucrat)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_grade = cpy._grade;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Copy constructor called. (Bureaucrat)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", bureaucrat garde " << instance.getGrade();
	return ostr;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Bureaucrat has been destroyed." << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (checkGrade(this->_grade - 1))
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (checkGrade(this->_grade + 1))
		this->_grade++;
}

int Bureaucrat::checkGrade(int grade) const
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return (0);
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return (0);
	}
	return (1);
}
