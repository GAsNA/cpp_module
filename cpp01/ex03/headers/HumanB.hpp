/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:14:00 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/23 15:57:15 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon& weapon);

	private:
		Weapon	*weapon;
		std::string	name;
};

#endif
