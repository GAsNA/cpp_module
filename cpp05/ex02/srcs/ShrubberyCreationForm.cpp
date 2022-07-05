/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 16:42:11 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : _name(name), _signed(false), _grade_sign(145), _grade_exec(137)
{
	std::cout << "A ShrubberyCreationForm has been created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
{
	std::cout << "Copy constructor called. (ShrubberyCreationForm)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_signed = cpy._signed;
	this->_grade_sign = cpy._grade_sign;
	this->_grade_exec = cpy._grade_exec;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "Copy constructor called. (ShrubberyCreationForm)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "A ShrubberyCreationForm has been destroyed." << std::endl;
}

/****************************************************/
/*                 GETTERS SETTERS                  */
/****************************************************/

std::string ShrubberyCreationForm::getName() const
{
	return (this->_name);
}

bool ShrubberyCreationForm::isSigned() const
{
	return (this->_signed);
}

int ShrubberyCreationForm::getGradeSign() const
{
	return (this->_grade_sign);
}

int ShrubberyCreationForm::getGradeExec() const
{
	return (this->_grade_exec);
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

void	ShrubberyCreationForm::checkGrade(int grade) const
{
	if (grade > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
	else if (grade < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
}

void	ShrubberyCreationForm::beSigned(Bureaucrat *b)
{
	if (b->getGrade() > this->_grade_sign)
		throw ShrubberyCreationForm::GradeTooLowException();
	this->_signed = true;
}
