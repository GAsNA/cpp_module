/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:43:38 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/21 16:35:17 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setFirstname(std::string fn)
{
	this->firstname = fn;
}

void    Contact::setLastname(std::string ln)
{
    this->lastname = ln;
}

void    Contact::setNickname(std::string n)
{
    this->nickname = n;
}

void    Contact::setPhone(std::string phone)
{
    this->phone = phone;
}

void    Contact::setSecret(std::string secret)
{
    this->secret = secret;
}

void	Contact::put_contact(int index)
{
	std::cout << std::setw(10) << index << "|";
	if (this->firstname.length() > 10)
		std::cout << this->firstname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->firstname << "|";
	if (this->lastname.length() > 10)
		std::cout << this->lastname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->lastname << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}

void	Contact::put_infos()
{
		std::cout << "\tFirstname: " << this->firstname << std::endl;
		std::cout << "\tLastname: " << this->lastname << std::endl;
		std::cout << "\tNickname: " << this->nickname << std::endl;
		std::cout << "\tPhone number: " << this->phone << std::endl;
		std::cout << "\tDarkest secret: " << this->secret << std::endl;
}
