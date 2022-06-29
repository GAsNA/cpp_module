/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:25:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 15:07:12 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "An WrongCat has been created." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cpy)
{
	std::cout << "Copy constructor called (WrongCat)." << std::endl;
	if (this == &cpy)
		return ;
	this->type = cpy.type;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Copy constructor called (WrongCat)." << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "An WrongCat has been destroyed." << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaouu!" << std::endl;
}
