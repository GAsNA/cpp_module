/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/01 14:14:35 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "A MateriaSource has been created." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	std::cout << "Copy constructor called. (MateriaSource)" << std::endl;
	if (this == &cpy)
		return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	std::cout << "Copy constructor called. (MateriaSource)" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "A MateriaSource has been destroyed." << std::endl;
}

void MateriaSource::learnMateria(AMateria *am)
{
	
}

AMateria *createMateria(std::string const &type)
{
}
