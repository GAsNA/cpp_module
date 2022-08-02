/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:21:57 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 14:30:08 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void) {};
		MutantStack<T>(MutantStack<T> const & cpy) : std::stack<T>(cpy){}
		MutantStack<T>	&operator=(MutantStack<T> const & rhs)
		{
			if (this == &rhs)
				return *this;
			std::stack<T>::operator=(rhs);
			return *this; 
		}
		~MutantStack<T>(void) {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator r_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_r_iterator;

		iterator			begin(void) { return std::stack<T>::c.begin(); }
		iterator			end(void) { return std::stack<T>::c.end(); }
		const_iterator		begin(void) const { return std::stack<T>::c.begin(); }
		const_iterator		end(void) const { return std::stack<T>::c.end(); }
		r_iterator			rbegin(void) { return std::stack<T>::c.rbegin(); }
		r_iterator			rend(void) { return std::stack<T>::c.rend(); }
		const_r_iterator	rbegin(void) const { return std::stack<T>::c.rbegin(); }
		const_r_iterator	rend(void) const { return std::stack<T>::c.rend(); }
};

#endif
