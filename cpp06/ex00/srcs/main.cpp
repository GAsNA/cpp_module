/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:39:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/08 11:55:58 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

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
	std::cout << "char: " << convertChar(av[1]) << std::endl;
	std::cout << "int: " << /*convert int*/ << std::endl;
	std::cout << "float: " << /*convert float*/ << std::endl;
	std::cout << "double: " << /*convert double*/ << std::endl;
	return (0);
}
