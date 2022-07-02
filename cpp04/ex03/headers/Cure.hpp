/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:11:17 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/02 13:53:35 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &cpy);
		Cure &operator=(Cure const &rhs);
		~Cure();
		/*virtual*/ AMateria *clone() const;
		/*virtual*/ void	use(ICharacter& target);
};

#endif
