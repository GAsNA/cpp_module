/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:12:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/22 13:16:48 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

Zombie*	newZombie(std::string name)
{
	Zombie	*z;

	z = (Zombie*)malloc(sizeof(Zombie));
	if (!z)
		return (0);
	z->setName(name);
	return (z);
}
