/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:11:17 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 14:35:16 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &cpy);
		Cure &operator=(Cure const &rhs);
		~Cure();
		AMateria *clone() const;
		void	use(ICharacter& target);
};

#endif
