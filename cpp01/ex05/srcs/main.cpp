/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:13:59 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/17 20:05:52 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl k;

	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("TEST");
	k.complain("ERROR");
	return (0);
}
