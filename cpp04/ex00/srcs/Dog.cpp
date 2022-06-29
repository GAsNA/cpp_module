/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 13:18:31 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "An Dog has been created." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &cpy)
{
	std::cout << "Copy constructor called (Dog)." << std::endl;
	if (this == &cpy)
		return ;
	this->type = cpy.type;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Copy constructor called (Dog)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "An Dog has been destroyed." << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Waouf Waouf!" << std::endl;
}
