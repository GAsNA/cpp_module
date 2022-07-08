/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/07 16:08:54 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

Form::Form()
{
	std::cout << "A Form has been created." << std::endl;
}

Form::Form(std::string name, int grade_sign, int grade_exec, std::string target) : _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), _target(target)
{
	checkGrade(grade_sign);
	checkGrade(grade_exec);
	std::cout << "A Form has been created." << std::endl;
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

std::string Form::getTarget() const
{
	return (this->_target);
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

void	Form::checkGrade(int grade) const
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
}

void	Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void	Form::execute(const Bureaucrat & executor) const
{
	if (!this->isSigned())
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->_grade_exec)
		throw Form::GradeTooLowException();
	executeConcrete();
}
