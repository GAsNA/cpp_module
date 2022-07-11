/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/11 14:15:22 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
//	std::cout << "A Character has been created." << std::endl;
	for (int i = 0; i < 4; i++)
		this->_items[i] = NULL;
}

Character::Character(Character const &cpy)
{
//	std::cout << "Copy constructor called. (Character)" << std::endl;
	if (this == &cpy)
		return ;
	this->_name = cpy._name;
	for (int i = 0; i < 4; i++)
		this->_items[i] = cpy._items[i]->clone();
}

Character &Character::operator=(Character const &rhs)
{
//	std::cout << "Copy constructor called. (Character)" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_items[i])
			delete this->_items[i];
		this->_items[i] = rhs._items[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
//	std::cout << "A Character has been destroyed." << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_items[i])
			delete this->_items[i];
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4 && this->_items[i]);
	if(i < 4)
		this->_items[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && this->_items[idx])
		this->_items[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4 && this->_items[idx])
		this->_items[idx]->use(target);
}
