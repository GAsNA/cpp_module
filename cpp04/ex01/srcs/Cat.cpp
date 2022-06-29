/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 23:21:17 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "An Cat has been created." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &cpy)
{
	std::cout << "Copy constructor called (Cat)." << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Copy constructor called (Cat)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "An Cat has been destroyed." << std::endl;
	delete this->_brain;
}

std::string Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouu!" << std::endl;
}

Brain	&Cat::getBrain(void) const
{
	return (*this->_brain);
}
