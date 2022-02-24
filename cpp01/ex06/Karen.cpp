/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:13:24 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/24 16:45:12 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#include <iostream>
#include <map>

# define _END "\x1B[0m"

# define _RED "\x1B[31m"
# define _YELLOW "\x1B[33m"
# define _BLUE "\x1B[34m"
# define _PURPLE "\x1B[35m"

typedef void (Karen::*FnPtr)(void);

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::debug(void)
{
	std::cout << _YELLOW << "[ DEBUG ]" << _END << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << _BLUE << "[ INFO ]" << _END << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger !\nIf you did, I wouldn’t be asking for more !\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << _PURPLE << "[ WARNING ]" << _END << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << _RED << "[ ERROR ]" << _END << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n" << std::endl;
}

static void	other(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}

void	Karen::complain(std::string level)
{
	std::map<std::string, FnPtr> funcs;
	funcs["DEBUG"] = &Karen::debug;
	funcs["INFO"] = &Karen::info;
	funcs["WARNING"] = &Karen::warning;
	funcs["ERROR"] = &Karen::error;

	if (funcs.count(level))
		(this->*funcs[level])();
	else
		other();
}
