/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:25:25 by rleseur           #+#    #+#             */
/*   Updated: 2022/08/02 14:13:20 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	srand(time(0));

	{
		try {
			
			Span sp = Span(5);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "----------------------------------------------" << std::endl;

	{
		try {
		
			Span sp = Span(10000);
			
			for (int i = 0; i < 10000; i++)
			{
				int j = rand() % 100000;
				sp.addNumber(j);
			}

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "----------------------------------------------" << std::endl;

	{
		try {
		
			Span sp = Span(5);
			std::vector<int> v;

			v.push_back(7);
			v.push_back(42);
			v.push_back(9);
			v.push_back(21);
			v.push_back(0);

			sp.addWithIte(v.begin(), v.end());

			sp.affValues();

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}
