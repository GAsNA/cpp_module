/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:36:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/31 18:40:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v = { 7, 5, 16, 42, 8 };

	try {
		std::cout << easyfind(v, 42);
	} catch (std::exception &e) { std::cout << e.what() << std::endl; }	
}
