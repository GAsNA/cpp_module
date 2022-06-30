/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 17:58:56 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "An Animal has been created." << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const &cpy)
{
	std::cout << "Copy constructor called (Animal)." << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy constructor called (Animal)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "An Animal has been destroyed." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "This Animal doesn't make sound." << std::endl;
}
