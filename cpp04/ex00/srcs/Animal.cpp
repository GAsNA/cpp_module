/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 13:18:15 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "An Animal has been created." << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal const &cpy)
{
	std::cout << "Copy constructor called (Animal)." << std::endl;
	if (this == &cpy)
		return ;
	this->type = cpy.type;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy constructor called (Animal)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "An Animal has been destroyed." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "This Animal doesn't make sound." << std::endl;
}
