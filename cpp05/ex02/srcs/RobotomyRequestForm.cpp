/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 17:01:30 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

RobotomyRequestForm::RobotomyRequestForm(std::string name) : _name(name), _signed(false), _grade_sign(72), _grade_exec(45)
{
	std::cout << "A RobotomyRequestForm has been created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy)
{
	std::cout << "Copy constructor called. (RobotomyRequestForm)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_signed = cpy._signed;
	this->_grade_sign = cpy._grade_sign;
	this->_grade_exec = cpy._grade_exec;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	std::cout << "Copy constructor called. (RobotomyRequestForm)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "A RobotomyRequestForm has been destroyed." << std::endl;
}

/****************************************************/
/*                 GETTERS SETTERS                  */
/****************************************************/

std::string RobotomyRequestForm::getName() const
{
	return (this->_name);
}

bool RobotomyRequestForm::isSigned() const
{
	return (this->_signed);
}

int RobotomyRequestForm::getGradeSign() const
{
	return (this->_grade_sign);
}

int RobotomyRequestForm::getGradeExec() const
{
	return (this->_grade_exec);
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

void	RobotomyRequestForm::checkGrade(int grade) const
{
	if (grade > 150)
		throw RobotomyRequestForm::GradeTooLowException();
	else if (grade < 1)
		throw RobotomyRequestForm::GradeTooHighException();
}

void	RobotomyRequestForm::beSigned(Bureaucrat *b)
{
	if (b->getGrade() > this->_grade_sign)
		throw RobotomyRequestForm::GradeTooLowException();
	this->_signed = true;
}
