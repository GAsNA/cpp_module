/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:42:21 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/10 15:04:07 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "The zombie has been created." << std::endl;
	return ;
}

/*Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "The zombie '" << this->name << "' has been created." << std::endl;
	return ;
}*/

Zombie::~Zombie(void)
{
	std::cout << "The zombie '" << this->name << "' has been destroyed." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
