/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:32:30 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 00:34:50 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identification.hpp"

int main()
{
	srand(time(0));
	Base *p = generate();
	identify(p);
	identify(*p);
}
