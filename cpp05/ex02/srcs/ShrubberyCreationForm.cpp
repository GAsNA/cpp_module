/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:03:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/09 17:04:48 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

/****************************************************/
/*        CONSTRUCTORS DESTRUCTOR OPERATORS         */
/****************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target) 
{
	std::cout << "A ShrubberyCreationForm has been created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy)
{
	std::cout << "Copy constructor called. (ShrubberyCreationForm)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	this->_target = cpy._target;
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
	this->_target = rhs._target;
	this->_signed = rhs._signed;
	this->_grade_sign = rhs._grade_sign;
	this->_grade_exec = rhs._grade_exec;
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, ShrubberyCreationForm const & instance)
{
	ostr << instance.getName() << ", signed: " << instance.isSigned() << ".\n\tTarget: " << instance.getTarget() << "\n\tGrade for sign: " << instance.getGradeSign() << ", grade for exec: " << instance.getGradeExec();
	return ostr;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "A ShrubberyCreationForm has been destroyed." << std::endl;
}

/****************************************************/
/*                MEMBER FUNCTIONS                  */
/****************************************************/

void	ShrubberyCreationForm::executeConcrete() const
{
	std::ofstream file;
	file.open((this->_target + "_shrubbery").c_str());
	std::string lines = "              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\\\  _\\, y | \\//\n\
         _\\_.___\\\\, \\\\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._\n";
	file.write(lines.c_str(), lines.size());
	file.close();
}
