/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:05:21 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/01 21:57:19 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <list>
# include <map>
# include <iostream>

class NoOccurenceFoundException : public std::exception
{
	public:
		virtual const char* what() const throw() {
			return "No occurence found.";
		}
};

template<typename T>
typename T::iterator	easyfind(T t, int toFind)
{
	typename T::iterator i = std::find(t.begin(), t.end(), toFind);
	if (i != t.end())
		return i;
	throw NoOccurenceFoundException();
}

#endif
