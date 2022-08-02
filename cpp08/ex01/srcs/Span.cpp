/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:45:40 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 14:12:46 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _array(0), _size(N)
{
	if (N < 0)
		throw Span::NoGoodValue();
}

Span::Span(Span const & cpy)
{
	if (this == &cpy)
		return;
	this->_size = cpy._size;
	this->_array = cpy._array;
}

Span	&Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_size = rhs._size;
	this->_array = rhs._array;
	return *this;
}

Span::~Span() {}

unsigned int	Span::getSize()
{
	return this->_size;
}

void	Span::addNumber(int n)
{
	int	i = this->_array.size();
	if (i == this->_size)
		throw NoSpaceAvailable();
	this->_array.push_back(n);
}

void	Span::addWithIte(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int i = this->_array.size();
	if (i == this->_size)
		throw NoSpaceAvailable();
	std::vector<int> v(begin, end);
	copy(v.begin(), v.end(), std::back_inserter(this->_array));
}

int	Span::shortestSpan()
{
	if (this->_array.size() < 2)
		throw NoDistancePossible();
	int span = *this->_array.begin() - *(this->_array.begin() + 1);
	span = span < 0 ? -span : span;
	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end(); it++)
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != this->_array.end(); it2++)
		{
			int dis = *it - *it2;
			dis = dis < 0 ? -dis : dis;
			if (dis < span) { span = dis; }
		}
	}
	return span;
}

int	Span::longestSpan()
{
	if (this->_array.size() < 2)
		throw NoDistancePossible();
	int span = *this->_array.begin() - *(this->_array.begin() + 1);
	span = span < 0 ? -span : span;
	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end(); it++)
	{
		for (std::vector<int>::iterator it2 = it + 1; it2 != this->_array.end(); it2++)
		{
			int dis = *it - *it2;
			dis = dis < 0 ? -dis : dis;
			if (dis > span) { span = dis; }
		}
	}
	return span;
}

void	Span::affValues()
{
	std::cout << "Values: " << std::endl;
	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end(); it++)
		std::cout << "\t-> " << *it << std::endl;
}
