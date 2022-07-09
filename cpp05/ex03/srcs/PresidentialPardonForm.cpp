/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/09 15:43:31 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5, target)
{
	std::cout << "A PresidentialPardonForm has been created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy)
{
	std::cout << "Copy constructor called. (PresidentialPardonForm)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_target = cpy._target;
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
	this->_target = rhs._target;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, PresidentialPardonForm const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tTarget: " << instance.getTarget() << "\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "A PresidentialPardonForm has been destroyed." << std::endl;
}

void	PresidentialPardonForm::executeConcrete() const
{
	std::cout << this->_target << " was forgiven by Zaphod Beeblebrox." << std::endl;
}
