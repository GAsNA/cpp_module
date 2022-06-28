/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:33:24 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/23 08:55:38 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// Coplienne: private underscore, constructeur defaut, constructeur copy, operator =, destructeur

class ClapTrap
{
	protected:
		std::string	_name;
		int			_pv;
		int			_energy;
		int			_attack_dmg;

	public:
		ClapTrap(std::string); // constructeur
		ClapTrap(ClapTrap const & copy); // constructeur par copie
		ClapTrap &operator=(ClapTrap const & rhs); // surcharge d'operateur =
		~ClapTrap();
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};

#endif
