/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:30:43 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/27 13:26:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(int const val)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = (val << Fixed::_bits);
	return ;
}

Fixed::Fixed(float const val)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(val * (1 << Fixed::_bits));
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	//std::cout << "Copy constructor called" << std::endl;
	if (&f != this)
		this->_value = f.getRawBits();
	return ;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}


/****************************************************************/
/*							ARITHMETICS							*/
/****************************************************************/


Fixed Fixed::operator+(const Fixed &f) const
{
	Fixed	f2;
	f2.setRawBits(this->_value + f.getRawBits());
	return (f2);
}

Fixed Fixed::operator-(const Fixed &f) const
{
	Fixed	f2;
	f2.setRawBits(this->_value - f.getRawBits());
	return (f2);
}

Fixed Fixed::operator*(const Fixed &f) const
{
	Fixed	f2;
	f2.setRawBits((this->_value * f.getRawBits()) >> Fixed::_bits);
	return (f2);
}

Fixed Fixed::operator/(const Fixed &f) const
{
	Fixed	f2;
	f2.setRawBits((this->_value << Fixed::_bits) / f.getRawBits());
	return (f2);
}


/****************************************************************/
/*							COMPARAISONS						*/
/****************************************************************/


bool Fixed::operator>(Fixed const &f) const
{
	if (this->_value > f.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<(Fixed const &f) const
{
	if (this->_value < f.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator>=(Fixed const &f) const
{
	if (this->_value >= f.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<=(Fixed const &f) const
{
	if (this->_value <= f.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator==(Fixed const &f) const
{
	if (this->_value == f.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator!=(Fixed const &f) const
{
	if (this->_value != f.getRawBits())
		return (1);
	return (0);
}


/****************************************************************/
/*							INCRE && DECRE						*/
/****************************************************************/


Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed f(*this);
	operator++();
	return (f);
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed f(*this);
	operator--();
	return (f);
}


/****************************************************************/
/*							OTHERS								*/
/****************************************************************/


const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_bits);
}
