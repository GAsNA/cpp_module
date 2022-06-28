/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:32:03 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/23 09:05:40 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap s("scav");
	ScavTrap t(s);
	s.guardGate();
	s.attack("test");
	t.beRepaired(1);
	ScavTrap u = s;
	u.attack("autre");
	return (0);
}
