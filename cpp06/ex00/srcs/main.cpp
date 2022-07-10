/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:39:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/10 12:54:27 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	getType(std::string str)
{
	if (std::strcmp(str, "-inff") == 0 || std::strcmp(str, "+inff") == 0
		|| std::strcmp(str, "nanf") == 0)
		return (FLOAT);
	if (std::strcmp(str, "-inf") == 0
		|| std::strcmp(str, "+inf") == 0 || std::strcmp(str, "nan") == 0)
		return (DOUBLE);
	if (str[str.size() - 1] == 'f')
		return (FLOAT);
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Not enough arguments" << std::endl;
		return (1);
	}
	else if (ac > 2)
	{
		std::cout << "Too many arguments" << std::endl;
		return (1);
	}
	type t = getType(av[1]);
//	std::cout << "char: " << /*convert char*/ << std::endl;
//	std::cout << "int: " << /*convert int*/ << std::endl;
//	std::cout << "float: " << /*convert float*/ << std::endl;
//	std::cout << "double: " << /*convert double*/ << std::endl;
	return (0);
}
