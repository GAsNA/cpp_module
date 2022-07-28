/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:41:45 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 11:07:59 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	aff(T &a)
{
	std::cout << a << std::endl;
}

void	square(int &a)
{
	a *= a;
}

template<typename T>
void	iter(T *addr, int size, void (*f)(T&))
{
	for (int i = 0; i < size; i++)
		f(addr[i]);
}

#endif
