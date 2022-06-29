/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:43:19 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 17:25:20 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A Brain has been created!" << std::endl;
}

Brain::Brain(Brain const &cpy)
{
	std::cout << "Copy constructor called (Brain)." << std::endl;
	if (this == &cpy)
		return ;
}

Brain const &Brain::operator=(Brain const &rhs)
{
	std::cout << "Copy constructor called (Brain)." << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "A Brain has been destroyed." << std::endl;
}
