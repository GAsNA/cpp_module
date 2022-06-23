/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:32:03 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/23 09:35:22 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap s("frag");
	FragTrap t(s);
	s.highFivesGuys();
	s.attack("test");
	t.beRepaired(1);
	FragTrap u = s;
	u.attack("autre");
	return (0);
}
