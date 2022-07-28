/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:35:52 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 12:57:02 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &cpy);
		Array	&operator=(Array const &rhs);
		~Array();
		int	size();
		
		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Invalid index!";
				}
		};

	private:
		
};

#endif
