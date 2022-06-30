/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 14:36:16 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string const & type) : _type(type)
{
	std::cout << "A Cure has been created." << std::endl;
}

Cure::Cure(Cure const &cpy)
{
	std::cout << "Copy constructor called. (Cure)" << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
}

Cure &operator=(Cure const &rhs)
{
	std::cout << "Copy constructor called. (Cure)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "A Cure has been destroyed." << std::endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout <<  "* heals " << target->getName() << "'s wounds *" << std::endl;
}
