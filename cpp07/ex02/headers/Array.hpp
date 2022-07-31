/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:35:52 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/31 15:44:15 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Invalid index!";
				}
		};
		
		Array<T>() : _size(0), _array(NULL){};
		Array<T>(const unsigned int n) : _size(n) {
			if (n < 0) {throw InvalidIndexException();}
			this->_array = new T[n];
		};
		Array<T>(Array<T> const &cpy) {
			if (this == &cpy) {return;}
		 	if (this->_array)
				delete [] this->_array;
			this->_size = cpy._size;
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = cpy._array[i];
		};
		Array<T>	&operator=(Array<T> const &rhs) {
			if (this == &rhs) {return *this;}
		 	if (this->_array)
				delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return *this;
		};
		T	&operator[](const int i) const {
			if (i >= this->_size || i < 0) {throw InvalidIndexException();}
			return this->_array[i];
		}
		~Array() {
			if (this->_size > 0) {delete [] this->_array;}
		};
		int	size() const { return this->_size; };		

	private:
		int	_size;
		T	*_array;
};

#endif
