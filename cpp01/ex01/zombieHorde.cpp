/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:19:03 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/17 19:50:44 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*z;

	z = (Zombie *)malloc(N * sizeof(Zombie));
	if (!z)
		return (0);
	while (--N >= 0)
		z[N].setName(name);
	return (z);
}
