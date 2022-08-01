/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:45:40 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/01 23:27:08 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N)
{
	if (N < 0)
		throw Span::NoGoodValue();
	this->_array = new int[N];
}

Span::Span(Span const & cpy)
{
	if (this == &cpy)
		return;
	this->_size = cpy._size;
	if (this->_array)
		delete [] this->_array;
	this->_array = new int[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = cpy._array[i];
}

Span	&Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_size = rhs._size;
	if (this->_array)
		delete [] this->_array;
	this->_array = new int[this->_size];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}

Span::~Span() {}

unsigned int	Span::getSize()
{
	return this->_size;
}

static int	getActualSize(int *array)
{
	int	i = -1;
	while (array[++i]);
	return i;
}

void	Span::addNumber(int n)
{
	int	i = getActualSize(this->_array);
	if (i == this->_size)
		throw NoSpaceAvailable();
	this->_array[i] = n;
}

int	Span::shortestSpan()
{
	if (getActualSize(this->_array) < 2)
		throw NoDistancePossible();
	int span = this->_array[0] - this->_array[1];
	span = span < 0 ? -span : span;
	for (int i = 0; i < this->_size; i++)
	{
		for (int j = i + 1; j < this->_size; j++)
		{
			int dis = this->_array[i] - this->_array[j];
			dis = dis < 0 ? -dis : dis;
			if (dis < span)
				span = dis;
		}
	}
	return span;
}

int	Span::longestSpan()
{
	if (getActualSize(this->_array) < 2)
		throw NoDistancePossible();
	int span = this->_array[0] - this->_array[1];
	span = span < 0 ? -span : span;
	for (int i = 0; i < this->_size; i++)
	{
		for (int j = i + 1; j < this->_size; j++)
		{
			int dis = this->_array[i] - this->_array[j];
			dis = dis < 0 ? -dis : dis;
			if (dis > span)
				span = dis;
		}
	}
	return span;
}
