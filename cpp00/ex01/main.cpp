/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:42:51 by rleseur           #+#    #+#             */
/*   Updated: 2022/05/07 17:51:59 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	pb;
	
	while (1)
	{
		if (std::cin.eof())
			break ;
		std::cout << "Enter command: ";
		getline(std::cin, command);
		if(command.compare("EXIT") == 0)
			break ;
		else if (command.compare("ADD") == 0)
		{
			std::cout << "Add a new contact" << std::endl;
			pb.add_contact();
		}
		else if (command.compare("SEARCH") == 0)
		{
			std::cout << "Print all contacts and search one" << std::endl;
			pb.get_all_contacts();
		}
		else
			std::cout << "Nothing to be done for this" << std::endl;
		std::cout << "\n" << std::endl;
	}
	
	return (0);
}
