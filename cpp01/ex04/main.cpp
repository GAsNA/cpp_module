/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:19:56 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/20 14:23:12 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

static int	ft_put_error_args(void)
{
	std::cout << "Error\nUse: ./sed [name of the file] [s1] [s2]" << std::endl;
	return (1);
}

static int	ft_put_error_read(void)
{
	std::cout << "An error occured while reading the files" << std::endl;
	return (1);
}

static std::string	ft_replace(std::string line, int pos, int size, std::string rep)
{
	int	i;
	int	j;
	int	k;
	std::string new_line;

	new_line.reserve(line.length() - size + rep.length());
	i = -1;
	j = -1;
	while (++i < pos)
		new_line[i] = line[++j];
	i--;
	j += size;
	k = -1;
	while (rep[++k])
		new_line[++i] = rep[k];
	while (line[++j])
		new_line[++i] = line[j];
	return (new_line.c_str());
}

int	main(int ac, char **av)
{
	std::ofstream		replace;
	std::ifstream		read_file;
	std::ostringstream	text;
	std::string			all_lines;
	size_t				pos;

	if (ac != 4)
		return(ft_put_error_args());
	read_file.open(av[1]);
	if (!read_file.is_open())
		return (ft_put_error_read());
	replace.open((std::string(av[1]) + std::string(".replace")).c_str());
	text << read_file.rdbuf();
	all_lines = text.str();
	while (1)
	{
		pos = all_lines.find(std::string(av[2]));
		if(pos == std::string::npos)
			break;
		all_lines = ft_replace(all_lines, pos, std::string(av[2]).length(), std::string(av[3]));
	}
	read_file.close();
	replace.write(all_lines.c_str(), all_lines.size());
	replace.close();
	return (0);
}
