/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 18:03:46 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "An WrongAnimal has been created." << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
	std::cout << "Copy constructor called (WrongAnimal)." << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Copy constructor called (WrongAnimal)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "An WrongAnimal has been destroyed." << std::endl;
	delete this->_brain;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This WrongAnimal doesn't make sound." << std::endl;
}
