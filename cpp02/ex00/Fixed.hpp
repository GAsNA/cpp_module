/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:24:31 by rleseur           #+#    #+#             */
/*   Updated: 2022/03/02 11:45:37 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int	value;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &); // constructeur de recopie
		Fixed &operator=(const Fixed &);// surcharge de l’opérateur d’affectation
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
