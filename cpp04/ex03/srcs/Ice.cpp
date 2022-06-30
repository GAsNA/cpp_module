/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 18:34:34 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "A Ice has been created." << std::endl;
}

Ice::Ice(Ice const &cpy) : AMateria("ice")
{
	std::cout << "Copy constructor called. (Ice)" << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
}

Ice &Ice::operator=(Ice const &rhs)
{
	std::cout << "Copy constructor called. (Ice)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "A Ice has been destroyed." << std::endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
