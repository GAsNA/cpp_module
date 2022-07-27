/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:13:36 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 14:30:28 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>
# include <cctype>

enum e_type { CHAR, INT, FLOAT, DOUBLE, IMP };

class Conversion
{

	public:
		Conversion(std::string val);
		Conversion(Conversion const &cpy);
		Conversion &operator=(Conversion const &rhs);
		~Conversion();
	
		void aff_conversions();

		class NotGoodArgumentException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Not good argument!";
				}
		};

	private:
		double _valueD;
		std::string _value;
		e_type _type;

		std::string	toChar();
		std::string	toInt();
		std::string	toFloat();
		std::string	toDouble();
		
		void		getDouble(std::string s);

};

e_type		getType(std::string val);
std::string	getGoodValue(std::string val);

#endif
