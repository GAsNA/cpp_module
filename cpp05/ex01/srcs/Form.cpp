/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/04 13:48:45 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (checkGrade(grade_sign) && checkGrade(grade_exec))
		std::cout << "A Form has been created." << std::endl;
}

Form::Form(Form const &cpy)
{
	std::cout << "Copy constructor called. (Form)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_signed = cpy._signed;
	this->_grade_sign = cpy._grade_sign;
	this->_grade_exec = cpy._grade_exec;
}

Form	&Form::operator=(Form const &rhs)
{
	std::cout << "Copy constructor called. (Form)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Form const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

Form::~Form()
{
	std::cout << "A Form has been destroyed." << std::endl;
}

/****************************************************/
/*                 GETTERS SETTERS                  */
/****************************************************/

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::isSigned() const
{
	return (this->_signed);
}

int Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int Form::getGradeExec() const
{
	return (this->_grade_exec);
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

int Form::checkGrade(int grade) const
{
	if (grade > 150)
	{
		throw Form::GradeTooLowException();
		return (0);
	}
	else if (grade < 1)
	{
		throw Form::GradeTooHighException();
		return (0);
	}
	return (1);
}

void	Form::beSigned(Bureaucrat *b)
{
	if (b->getGrade() > this->_grade_sign)
	{
		throw Form::GradeTooLowException();
		return ;
	}
	this->_signed = true;
}
