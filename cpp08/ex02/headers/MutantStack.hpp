/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:21:57 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 11:48:07 by rleseur          ###   ########.fr       */
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
		MutantStack<T>(MutantStack<T> const & cpy) { *this = cpy; }
		MutantStack<T>	&operator=(MutantStack<T> const & rhs) { (void)rhs; return *this; }
		~MutantStack<T>(void) {};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) { return this->c.begin(); }
		iterator	end(void) { return this->c.end(); }
};

#endif
