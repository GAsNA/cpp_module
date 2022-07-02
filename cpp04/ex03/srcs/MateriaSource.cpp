/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/02 14:25:42 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
//	std::cout << "A MateriaSource has been created." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
//	std::cout << "Copy constructor called. (MateriaSource)" << std::endl;
	if (this == &cpy)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
		if (cpy._items[i])
			this->_items[i] = cpy._items[i]->clone();
		else
			this->_items[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
//	std::cout << "Copy constructor called. (MateriaSource)" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
		if (rhs._items[i])
			this->_items[i] = rhs._items[i]->clone();
		else
			this->_items[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
//	std::cout << "A MateriaSource has been destroyed." << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_items[i])
			delete this->_items[i];
}

void MateriaSource::learnMateria(AMateria *am)
{
	int i = -1;
	while (this->_items[++i]);
	if (i > 3)
		return ;
	this->_items[i] = am;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 && this->_items[i]; i++)
	{
		if (type == this->_items[i]->getType())
			return this->_items[i]->clone();
	}
	return (NULL);
}
