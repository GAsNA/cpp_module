/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 16:54:03 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

Form::Form(void)
{
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
