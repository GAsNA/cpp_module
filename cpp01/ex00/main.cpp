/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:50:37 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/20 13:20:55 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <cstdlib>

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	*z = newZombie("Foo");
	z->announce();
	randomChump("Boo");
	delete z;
	return (0);
}
