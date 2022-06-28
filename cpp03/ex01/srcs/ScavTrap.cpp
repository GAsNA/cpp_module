/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:39:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/27 15:53:12 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_pv = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
	std::cout << "A ScavTrap has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "A ScavTrap has been destroyed!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "A ScavTrap is on Gate keeper mode." << std::endl;
}
