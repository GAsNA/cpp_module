/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:39:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/28 09:42:35 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name), _pv(100), _energy(100), _attack_dmg(30)
{
	std::cout << "A FragTrap has been created!" << std::endl;
}

FragTrap::FragTrap(void) : _name(""), _pv(100), _energy(100), _attack_dmg(30)
{
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
