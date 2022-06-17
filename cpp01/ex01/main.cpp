/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:50:37 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/17 19:49:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

extern Zombie* zombieHorde(int N, std::string name);

int	main(int ac, char **av)
{
	int		N;
	int		i;
	Zombie	*z;

	(void)ac;
	(void)av;
	N = 5;
	z = zombieHorde(N, "TEST");
	i = -1;
	while (++i < N)
		z[i].announce();
	i = -1;
	while (++i < N)
		z[i].~Zombie();
	return (0);
}
