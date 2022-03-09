/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:39:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/03/09 11:15:06 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "(null)";
	this->pv = 10;
	this->energy = 10;
	this->attack_dmg = 0;
	std::cout << "A ClapTrap has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->pv = 10;
	this->energy = 10;
	this->attack_dmg = 0;
	std::cout << "A ClapTrap of name '" << this->name << "' has been created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "A Clap Trap of name '" << this->name << "' has been destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
			<< this->attack_dmg << " point(s) of damage." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " does not have enough energy." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->pv -= amount;
	if (this->pv < 0)
		this->pv = 0;
	std::cout << "ClapTrap " << this->name << " has lost " << amount << " pv." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0)
	{
		this->pv += amount;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " has been repaired." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " does not have enough energy." << std::endl;
}
