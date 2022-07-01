/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/01 16:12:43 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
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

Bureaucrat::~Bureaucrat()
{
	std::cout << "A Bureaucrat has been destroyed." << std::endl;
}

std::string Bureaucrat::getName()
{
	return (this->_name);
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
}
