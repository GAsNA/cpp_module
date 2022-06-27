/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:24:31 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/27 10:08:49 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:
		Fixed();
		Fixed(int const);
		Fixed(float const);
		Fixed(const Fixed &); // constructeur de recopie
		Fixed &operator=(const Fixed &); // surcharge de l’opérateur d’affectation
		~Fixed();

		Fixed operator+(const Fixed &) const;
		Fixed operator-(const Fixed &) const;
		Fixed operator*(const Fixed &) const;
		Fixed operator/(const Fixed &) const;

		bool operator>(Fixed const &) const;
		bool operator<(Fixed const &) const;
		bool operator>=(Fixed const &) const;
		bool operator<=(Fixed const &) const;
		bool operator==(Fixed const &) const;
		bool operator!=(Fixed const &) const;

		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);


		const static Fixed &min(const Fixed &, const Fixed &);
		const static Fixed &max(const Fixed &, const Fixed &);
		int		getRawBits(void) const;
		void	setRawBits(int const);
		float	toFloat(void) const;
		int		toInt(void) const;
};

Fixed &min(Fixed &, Fixed &);
Fixed &max(Fixed &, Fixed &);

std::ostream &operator<<(std::ostream &, const Fixed &);

#endif
