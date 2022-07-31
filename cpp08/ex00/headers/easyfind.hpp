/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:05:21 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/31 19:01:24 by rleseur          ###   ########.fr       */
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

int	getInVector(std::vector<int> v, int toFind)
{
	for (unsigned int i = 0; i < v.size(); i++) {
		if (v[i] == toFind)
			return v[i];
	}
	throw NoOccurenceFoundException();
}

int	getInList(std::list<int>(l), int toFind)
{
	/*std::list<int>::iterator it;
	for (it = l.begin(); it != l.end(); it++) {
		if (it == toFind)
			return it;
	}*/
(void)l;
(void)toFind;
	throw NoOccurenceFoundException();
}

template<typename T>
int	getInMap(std::map<T, int>(m), int toFind)
{
	typename std::map<T, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second == toFind)
			return it->second;
	}
	throw NoOccurenceFoundException();
}

template<typename T, typename U>
int	easyfind(T t, int toFind)
{
	if (dynamic_cast<std::vector<int> >(t))
		return getInVector(t, toFind);
	else if (dynamic_cast<std::list<int> >(t))
		return getInList(t, toFind);
	else if (dynamic_cast<std::map<U, int> >(t))
		return getInMap(t, toFind);
}

#endif
