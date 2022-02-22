/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:38:51 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/22 10:46:00 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
/*# include <cstdlib>*/

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void	announce(void);

	private:
		std::string name;
};

#endif

