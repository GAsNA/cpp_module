/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:25:34 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/21 11:18:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	ft_put_toupper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		std::cout << str[i];
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (av[++i])
		ft_put_toupper(av[i]);
	std::cout << std::endl;
	return (0);
}
