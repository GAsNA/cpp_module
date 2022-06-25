/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:50:37 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/20 13:40:09 by rleseur          ###   ########.fr       */
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
	delete[] z;
	return (0);
}
