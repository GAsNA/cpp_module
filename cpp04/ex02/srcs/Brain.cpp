/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:43:19 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 10:45:01 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A Brain has been created!" << std::endl;
	this->_last_idea = 0;
}

Brain::Brain(Brain const &cpy)
{
	std::cout << "Copy constructor called (Brain)." << std::endl;
	if (this == &cpy)
		return ;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	this->_last_idea = cpy._last_idea;
}

Brain const &Brain::operator=(Brain const &rhs)
{
	std::cout << "Copy constructor called (Brain)." << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	this->_last_idea = rhs._last_idea;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "A Brain has been destroyed." << std::endl;
}

void	Brain::set_idea(std::string idea)
{
	this->_ideas[this->_last_idea] = idea;
	this->_last_idea = this->_last_idea == 99 ? 0 : this->_last_idea + 1;
}

std::string	Brain::get_one_idea(int nb) const
{
	if (nb < 0 || nb > 99)
		return "";
	return (this->_ideas[nb]);
}
