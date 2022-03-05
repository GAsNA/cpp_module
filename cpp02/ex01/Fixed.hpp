/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:24:31 by rleseur           #+#    #+#             */
/*   Updated: 2022/03/02 15:08:51 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(int const);
		Fixed(float const);
		Fixed(const Fixed &); // constructeur de recopie
		Fixed &operator=(const Fixed &); // surcharge de l’opérateur d’affectation
		~Fixed();
	
		int		getRawBits(void) const;
		void	setRawBits(int const);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
