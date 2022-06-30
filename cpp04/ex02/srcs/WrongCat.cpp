/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 18:05:51 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "An WrongCat has been created." << std::endl;
	this->_type = "WrongCat";
	this->_brain = new Brain();
}

WrongCat::WrongCat(WrongCat const &cpy)
{
	std::cout << "Copy constructor called (WrongCat)." << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Copy constructor called (WrongCat)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "An WrongCat has been destroyed." << std::endl;
	delete this->_brain;
}

std::string WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaouu!" << std::endl;
}
