/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:08:32 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 21:15:52 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main()
{
	Data *d = new Data;
	d->i = 42;
	d->str = "Hello World!";
	Data *d2 = deserialize(serialize(d));
	std::cout << d2->i << std::endl;
	std::cout << d2->str << std::endl;
	return 0;
}
