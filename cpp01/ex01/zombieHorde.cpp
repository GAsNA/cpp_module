/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:19:03 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/20 13:41:09 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[N];
	while (--N >= 0)
		horde[N].setName(name);
	return (horde);
}
