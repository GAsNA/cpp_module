/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:17:33 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 17:38:44 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/***********************************************/
/*			Constructors / Destructor		   */
/***********************************************/

Conversion::Conversion(std::string val) : _type(getType(val))
{
//	std::cout << "Constructor called" << std::endl;
//	std::cout << "Type detected: " << this->_type << std::endl;
	if (this->_type != IMP)
	{
		getDouble(val);
		this->_value = getGoodValue(val);
	}
}

Conversion::Conversion(Conversion const &cpy)
{
//	std::cout << "Copy constructor called" << std::endl;
	if (this == &cpy)
		return ;
	this->_value = cpy._value;
	this->_valueD = cpy._valueD;
	this->_type = cpy._type;
}

Conversion	&Conversion::operator=(Conversion const &rhs)
{
//	std::cout << "Operator '=' called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_value = rhs._value;
	this->_valueD = rhs._valueD;
	this->_type = rhs._type;
	return (*this);
}

Conversion::~Conversion()
{
//	std::cout << "Destructor called" << std::endl;
}


/***********************************************/
/*				  Conversions				   */
/***********************************************/

std::string	Conversion::toChar(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD && this->_value[0] != '0')
		return "impossible";
	if (isprint(static_cast<char>(this->_valueD)))
		return std::string(1, static_cast<char>(this->_valueD));
	return "Non displayable";
}

std::string	Conversion::toInt(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD && this->_value[0] != '0')
		return "impossible";
	std::stringstream out;
	out << static_cast<int>(this->_valueD);
	return out.str();
}

std::string	Conversion::toFloat(void)
{
	float f = static_cast<float>(this->_valueD);
	if (this->_type == IMP)
		return "impossible";
	if (!f && this->_value[0] != '0')
		return this->_value + "f";
	std::stringstream out;
	out << f;
	if (f / static_cast<int>(f) == 1 || f == 0)
		return out.str() + ".0f";
	return out.str() + "f";
}

std::string	Conversion::toDouble(void)
{
	if (this->_type == IMP)
		return "impossible";
	if (!this->_valueD && this->_value[0] != '0')
		return this->_value;
	std::stringstream out;
	out << this->_valueD;
	if (this->_valueD / static_cast<int>(this->_valueD) == 1 || this->_valueD == 0)
		return out.str() + ".0";
	return out.str();
}

void		Conversion::getDouble(std::string s)
{
	if (s != "nan" && s != "-inf" && s != "+inf")
	{
		if (this->_type != CHAR)
			this->_valueD = std::atof(s.c_str());
		else
			this->_valueD = static_cast<double>(s[0]);
	}
}


/***********************************************/
/*					 Others					   */
/***********************************************/

void	Conversion::aff_conversions()
{
	std::cout << "char: " << toChar() << std::endl;
	std::cout << "int: " << toInt() << std::endl;
	std::cout << "float: " << toFloat() << std::endl;
	std::cout << "double: " << toDouble() << std::endl;
}

e_type	getType(std::string val)
{
	if (val == "nanf" || val == "-inff" || val == "+inff")
		return FLOAT;
	if (val == "nan" || val == "-inf" || val == "+inf")
		return DOUBLE;
	if (val.size() == 1 && !isdigit(val[0]))
		return CHAR;
	for (size_t i = 0; i < val.size(); i++)
		if (val[i] != '.' && val[i] != 'f' && val[i] != '-' && !std::isdigit(val[i]))
			return IMP;
	int f = 0;
	for (size_t i = 0; i < val.size(); i++)
		if (val[i] == 'f')
			f++;
	int p = 0;
	for (size_t i = 0; i < val.size(); i++)
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
	if (val.size() > 0 && f == 0 && p == 0)
		return INT;
	return IMP;
}

std::string	getGoodValue(std::string val)
{
	if (val == "nanf" || val == "-inff" || val == "+inff")
		return val.substr(0, val.size()-1);
	return val;
}
