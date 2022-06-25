/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:17:14 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/25 17:33:54 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : weapon(NULL)
{
	this->name = name;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " cannot attack. He has no weapon." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
