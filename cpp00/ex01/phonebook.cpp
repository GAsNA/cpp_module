/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:58:24 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/21 16:34:19 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <iomanip>
#include <ctype.h>

PhoneBook::PhoneBook(void)
{
	this->nb_contacts = 0;
	this->index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact()
{
	Contact		c;
	std::string	tmp;

	while (tmp.compare("\0") == 0)
	{
		std::cout << "\tFirst name: ";
		getline(std::cin, tmp);
	}
	c.setFirstname(tmp);
	tmp = "\0";
	while (tmp.compare("\0") == 0)
	{
		std::cout << "\tLast name: ";
		getline(std::cin, tmp);
	}
	c.setLastname(tmp);
	tmp = "\0";
	while (tmp.compare("\0") == 0)
	{
		std::cout << "\tNickname: ";
		getline(std::cin, tmp);
	}
	c.setNickname(tmp);
	tmp = "\0";
	while (tmp.compare("\0") == 0)
	{
		std::cout << "\tPhone number: ";
		getline(std::cin, tmp);
	}
	c.setPhone(tmp);
	tmp = "\0";
	while (tmp.compare("\0") == 0)
	{
		std::cout << "\tDarkest secret: ";
		getline(std::cin, tmp);
	}
	c.setSecret(tmp);
	this->contacts[this->index] = c;
	if (this->nb_contacts < 8)
		this->nb_contacts += 1;
	this->index += 1;
	if (index == 8)
		this->index = 0;
}

static int	is_all_numbers(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!std::isdigit(str[i]))
			return (0);
	return (1);
}

void	PhoneBook::get_all_contacts()
{
	int	i;
	std::string	index;

	std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|"
		<< std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "|" << std::endl;
	i = -1;
	while (++i < this->nb_contacts)
		this->contacts[i].put_contact(i);
	std::cout << std::endl;
	while (index.empty() || !is_all_numbers(index) || atoi(index.c_str()) < 0 || atoi(index.c_str()) >= this->nb_contacts)
	{
		std::cout << "Choose an index to see the details: ";
		getline(std::cin, index);
	}
	this->contacts[atoi(index.c_str())].put_infos();
}
