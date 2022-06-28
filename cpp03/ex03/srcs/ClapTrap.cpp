/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:39:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/28 09:40:20 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _pv(10), _energy(10), _attack_dmg(0)
{
	std::cout << "A ClapTrap has been created!" << std::endl;
}

ClapTrap::ClapTrap(void) : _name(""), _pv(10), _energy(10), _attack_dmg(0)
{
	std::cout << "A ClapTrap has been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
	std::cout << "Copy construcor called" << std::endl;
	if (this == &copy)
		return ;
	this->_name = copy._name;
	this->_pv = copy._pv;
	this->_energy = copy._energy;
	this->_attack_dmg = copy._attack_dmg;
}

ClapTrap::~ClapTrap()
{
	std::cout << "A Clap Trap has been destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_pv = rhs._pv;
	this->_energy = rhs._energy;
	this->_attack_dmg = rhs._attack_dmg;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
			<< this->_attack_dmg << " point(s) of damage." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_pv -= amount;
	if (this->_pv < 0)
		this->_pv = 0;
	std::cout << "ClapTrap " << this->_name << " has lost " << amount << " pv." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		this->_pv += amount;
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " has been repaired." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " does not have enough energy." << std::endl;
}
