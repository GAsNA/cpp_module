/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:19:56 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 12:02:13 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <list>
#include <vector>

int main()
{
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Top value: " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "Size: " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		std::cout << "Values: " << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "\t-> " << *it << std::endl;
			++it;
		}
	}

	std::cout << "----------------------------------------" << std::endl;

	{
		std::list<int>	l;

		l.push_back(5);
		l.push_back(17);

		std::cout << "Top value: " << l.back() << std::endl;

		l.pop_back();

		std::cout << "Size: " << l.size() << std::endl;

		l.push_back(3);
		l.push_back(5);
		l.push_back(737);
		l.push_back(0);

		std::list<int>::iterator it = l.begin();
		std::list<int>::iterator ite = l.end();

		std::cout << "Values: " << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "\t-> " << *it << std::endl;
			++it;
		}
	}

	std::cout << "----------------------------------------" << std::endl;

	{
		std::vector<int>	v;

		v.push_back(5);
		v.push_back(17);

		std::cout << "Top value: " << v.back() << std::endl;

		v.pop_back();

		std::cout << "Size: " << v.size() << std::endl;

		v.push_back(3);
		v.push_back(5);
		v.push_back(737);
		v.push_back(0);

		std::vector<int>::iterator it = v.begin();
		std::vector<int>::iterator ite = v.end();

		std::cout << "Values: " << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "\t-> " << *it << std::endl;
			++it;
		}
	}

	return 0;
}
