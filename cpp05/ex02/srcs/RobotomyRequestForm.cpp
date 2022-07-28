/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 14:10:49 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target)
{
	std::cout << "A RobotomyRequestForm has been created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy)
{
	std::cout << "Copy constructor called. (RobotomyRequestForm)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_target = cpy._target;
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
	this->_target = rhs._target;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, RobotomyRequestForm const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tTarget: " << instance.getTarget() << "\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "A RobotomyRequestForm has been destroyed." << std::endl;
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

void	RobotomyRequestForm::executeConcrete() const
{
	std::cout << "* bruit de perceuse *" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->_target << " was robotized." << std::endl;
	else
		std::cout << "Failed to robotized " << this->_target << std::endl;
}
