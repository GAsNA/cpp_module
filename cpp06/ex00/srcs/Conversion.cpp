/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:17:33 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 09:43:38 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/***********************************************/
/*	   Constructors / Destructor	       */
/***********************************************/

Conversion::Conversion(std::string val) : _type(getType(val))
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "Type detected: " << this->_type << std::endl;
	if (this->_type != IMP)
	{
		getDouble(val);
		this->_value = getGoodValue(val);
	}
}

Conversion::Conversion(Conversion const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this == &cpy)
		return ;
	this->_value = cpy._value;
	this->_valueD = cpy._valueD;
	this->_type = cpy._type;
}

Conversion	&Conversion::operator=(Conversion const &rhs)
{
	std::cout << "Operator '=' called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_value = rhs._value;
	this->_valueD = rhs._valueD;
	this->_type = rhs._type;
	return (*this);
}

Conversion::~Conversion()
{
	std::cout << "Destructor called" << std::endl;
}


/***********************************************/
/*		  Conversions		       */
/***********************************************/

std::string	Conversion::toChar(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD)
		return "impossible";
	if (isprint(static_cast<char>(this->_valueD)))
		return std::string(1, static_cast<char>(this->_valueD));
	return "Non displayable";
}

std::string	Conversion::toInt(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD)
		return "impossible";
	std::stringstream out;
	out << static_cast<int>(this->_valueD);
	return out.str();
}

std::string	Conversion::toFloat(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD)
		return this->_value + "f";
	std::stringstream out;
	out << this->_valueD;
	return out.str() + "f";
}

std::string	Conversion::toDouble(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD)
		return this->_value;
	std::stringstream out;
	out << this->_valueD;
	return out.str();
}

void		Conversion::getDouble(std::string s)
{
	if (s != "nan" && s != "-inf" && s != "+inf")
	{
		if (this->_type != CHAR)
			this->_valueD = std::atof(s.c_str());
		else
			this->_valueD static_cast<double>(s[0]);
	}
}


/***********************************************/
/*		     Others		       */
/***********************************************/

void	Conversion::aff_conversions()
{
	std::cout << "char: " << toChar(this->_value) << std::endl;
	std::cout << "int: " << toInt(this->_value) << std::endl;
	std::cout << "float: " << toDouble(this->_value) << "f" << std::endl;
	std::cout << "double: " << toDouble(this->_value) << std::endl;
}

static e_type	getType(std::string val)
{
	if (val == "nanf" || val == "-inff" || val == "+inff")
		return FLOAT;
	if (val == "nan" || val == "-inf" || val == "+inf")
		return DOUBLE;
	if (val.size() == 1 && !isdigit(val))
		return CHAR;
	for (int i = 0; i < val.size(); i++)
		if (val[i] != '.' && val[i] != 'f' && val[i] != '-' && !isdigit(val[i]))
			return IMP;
	int f = 0;
	for (int i = 0; i < val.size(); i++)
		if (val[i] == 'f')
			f++;
	int p = 0;
	for (int i = 0; i < val.size(); i++)
		if (val[i] == '.')
			p++;
	if (f == 1 && val[val.size() - 1] == 'f' && p == 1
		&& ((val[0] == '-' && val[1] != '.') || (val[0] != '.'))
		&& val[val.size() - 2] != '.')
		return FLOAT;
	if (f == 0 && p == 1
		&& ((val[0] == '-' && val[1] != '.') || (val[0] != '.'))
		&& val[val.size() - 1] != '.')
		return DOUBLE;
	if (f == 0 && p == 0)
		return INT;
	return IMP;
}

static std::string	getGoodValue(std::string val)
{
	if (val == "nanf" || val == "-inff" || val == "+inff")
		return val.substr(0, myString.size()-1);
	return val;
}
