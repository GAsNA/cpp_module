/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/11 12:25:00 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "An Dog has been created." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &cpy)
{
	std::cout << "Copy constructor called (Dog)." << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Copy constructor called (Dog)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	if (this->_brain)
		delete _brain;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "An Dog has been destroyed." << std::endl;
	delete this->_brain;
}

std::string Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waouf Waouf!" << std::endl;
}

Brain	&Dog::getBrain(void) const
{
	return (*this->_brain);
}
