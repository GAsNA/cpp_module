/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:08:13 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/23 15:58:58 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon 
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string&	getType();
		void	setType(std::string type);

	private:
		std::string	type;
};

#endif
