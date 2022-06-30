/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 14:33:56 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const & type) : _type(type)
{
	std::cout << "A Ice has been created." << std::endl;
}

Ice::Ice(Ice const &cpy)
{
	std::cout << "Copy constructor called. (Ice)" << std::endl;
	if (this == &cpy)
		return ;
	this->_type = cpy._type;
}

Ice &operator=(Ice const &rhs)
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
	std::cout <<  "* shoots an ice bolt at " << target->getName() << " *" << std::endl;
}
