/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identification.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:18:25 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 00:43:39 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identification.hpp"

Base	*generate(void)
{
	Base	*p;
	int	i = rand();
	if (i % 3 == 0)
		p = new A();
	else if (i % 3 == 1)
		p = new B();
	else
		p = new C();
	return p;
}

void	identify(Base	*p)
{
	std::cout << "Identify '*': ";
	if (dynamic_cast<A*>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

void	identify(Base	&p)
{
	std::cout << "Identify '&': ";
	Base	p2;
	bool	ret = false;
	try {
		p2 = dynamic_cast<A&>(p);
		std::cout << "Type A" << std::endl;
		ret = true;
	} catch (std::exception & e) {}
	if (ret)
		return;
	try {
		p2 = dynamic_cast<B&>(p);
		std::cout << "Type B" << std::endl;
		ret = true;
	} catch (std::exception & e) {}
	if (ret)
		return;
	try {
		p2 = dynamic_cast<C&>(p);
		std::cout << "Type C" << std::endl;
		ret = true;
	} catch (std::exception & e) {}
}
