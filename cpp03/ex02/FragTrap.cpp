/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:39:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/23 09:36:31 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_pv = 100;
	this->_energy = 100;
	this->_attack_dmg = 30;
	std::cout << "A FragTrap has been created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "A FragTrap has been destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Can we high fives ?" << std::endl;
}
