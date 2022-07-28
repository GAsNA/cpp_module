/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:41:45 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 13:15:47 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	aff(const T &a)
{
	std::cout << a << std::endl;
}

void	square(int &a)
{
	a *= a;
}

template<typename T>
void	iter(T *addr, int size, void (*f)(const T&))
{
	for (int i = 0; i < size; i++)
		f(addr[i]);
}

template<typename T>
void	iter(T *addr, int size, void (*f)(T&))
{
	for (int i = 0; i < size; i++)
		f(addr[i]);
}

#endif