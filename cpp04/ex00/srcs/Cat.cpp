/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 13:19:25 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "An Cat has been created." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &cpy)
{
	std::cout << "Copy constructor called (Cat)." << std::endl;
	if (this == &cpy)
		return ;
	this->type = cpy.type;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Copy constructor called (Cat)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "An Cat has been destroyed." << std::endl;
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouu!" << std::endl;
}
