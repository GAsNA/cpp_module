/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:32:03 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/22 14:56:30 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Foo");
	ClapTrap b("Boo");

	a.attack("Boo");
	b.takeDamage(0);
	b.beRepaired(1);
	return (0);
}
