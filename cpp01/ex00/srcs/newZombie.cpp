/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:12:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/20 13:19:55 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

Zombie*	newZombie(std::string name)
{
	Zombie	*z = new Zombie();
	z->setName(name);
	return (z);
}
