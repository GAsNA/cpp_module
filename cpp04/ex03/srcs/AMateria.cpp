/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:07:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/02 14:19:27 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
//	std::cout << "A AMateria has been created." << std::endl;
}

AMateria::~AMateria()
{
//	std::cout << "A AMateria has been destroyed." << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}
