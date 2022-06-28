/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:39:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/28 09:51:40 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_pv = FragTrap::_pv;
	this->_energy = ScavTrap::_energy;
	this->_attack_dmg = FragTrap::_attack_dmg;
	std::cout << "A DiamondTrap has been created!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "A DiamondTrap has been destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->_name << "\t\tClapTrap name: " << this->ClapTrap::_name << std::endl;
	std::cout << "Hit points: " << this->_pv << std::endl;
	std::cout << "Energy points: " << this->_energy << std::endl;
	std::cout << "Attack damage: " << this->_attack_dmg << std::endl;
}
