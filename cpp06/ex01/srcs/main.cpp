/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:08:32 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 20:55:06 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main()
{
	Data *d = NULL;
	d->i = 42;
	Data *d2 = deserialize(serialize(d));
	std::cout << d2->i << std::endl;
	return 0;
}
