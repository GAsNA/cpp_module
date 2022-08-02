/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:26:54 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 14:13:02 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cstdlib>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const & cpy);
		Span &operator=(Span const & rhs);
		~Span();

		unsigned int	getSize();
	
		void	addNumber(int n);
		void	addWithIte(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		void	affValues();

		class NoGoodValue : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Not a good parameter!";
				}
		};

		class NoSpaceAvailable : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "No space available!";
				}
		};

		class NoDistancePossible : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "No distance possible!";
				}
		};

	private:
		std::vector<int>	_array;
		int					_size;
};

#endif
