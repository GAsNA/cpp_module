/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:58:24 by rleseur           #+#    #+#             */
/*   Updated: 2022/05/09 10:56:44 by rleseur          ###   ########.fr       */
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

static int	is_all_numbers(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!std::isdigit(str[i]))
			return (0);
	return (i);
}

static int	others_than_space(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] != ' ')
			return (1);
	return (0);
}

static void add_elem(std::string str, Contact *c, void (Contact::*f)(std::string), int is_phone)
{
	std::string	tmp;

	while (tmp.compare("\0") == 0)
	{
		std::cout << str;
		getline(std::cin, tmp);
		if (std::cin.eof())
			return ;
		if (is_phone)
		{
			if (is_all_numbers(tmp) != 10)
				tmp.clear();
		}
		else
			if (!others_than_space(tmp))
				tmp.clear();
	}
	(*c.*f)(tmp);
}

void	PhoneBook::add_contact()
{
	Contact		c;

	add_elem("\tFirst name: ", &c, &Contact::setFirstname, 0);
	add_elem("\tLast name: ", &c, &Contact::setLastname, 0);
	add_elem("\tNickname: ", &c, &Contact::setNickname, 0);
	add_elem("\tPhone number: ", &c, &Contact::setPhone, 1);
	add_elem("\tDarkest secret: ", &c, &Contact::setSecret, 0);
	this->contacts[this->index] = c;
	if (this->nb_contacts < 8)
		this->nb_contacts += 1;
	this->index += 1;
	if (index == 8)
		this->index = 0;
}

void	PhoneBook::get_all_contacts()
{
	int	i;
	std::string	index;

	if (this->nb_contacts == 0)
	{
		std::cout << "The phonebook is empty." << std::endl;
		return ;
	}
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
		if (std::cin.eof())
			return ;
	}
	this->contacts[atoi(index.c_str())].put_infos();
}
