/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 17:00:16 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

PresidentialPardonForm::PresidentialPardonForm(std::string name) : _name(name), _signed(false), _grade_sign(25), _grade_exec(5)
{
	std::cout << "A PresidentialPardonForm has been created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy)
{
	std::cout << "Copy constructor called. (PresidentialPardonForm)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_signed = cpy._signed;
	this->_grade_sign = cpy._grade_sign;
	this->_grade_exec = cpy._grade_exec;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "Copy constructor called. (PresidentialPardonForm)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "A PresidentialPardonForm has been destroyed." << std::endl;
}

/****************************************************/
/*                 GETTERS SETTERS                  */
/****************************************************/

std::string PresidentialPardonForm::getName() const
{
	return (this->_name);
}

bool PresidentialPardonForm::isSigned() const
{
	return (this->_signed);
}

int PresidentialPardonForm::getGradeSign() const
{
	return (this->_grade_sign);
}

int PresidentialPardonForm::getGradeExec() const
{
	return (this->_grade_exec);
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

void	PresidentialPardonForm::checkGrade(int grade) const
{
	if (grade > 150)
		throw PresidentialPardonForm::GradeTooLowException();
	else if (grade < 1)
		throw PresidentialPardonForm::GradeTooHighException();
}

void	PresidentialPardonForm::beSigned(Bureaucrat *b)
{
	if (b->getGrade() > this->_grade_sign)
		throw PresidentialPardonForm::GradeTooLowException();
	this->_signed = true;
}
