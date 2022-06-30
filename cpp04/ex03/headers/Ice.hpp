/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:11:17 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 14:22:14 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &cpy);
		Ice &operator=(Ice const &rhs);
		~Ice();
		AMateria *clone() const;
		void	use(ICharacter& target);
};

#endif
