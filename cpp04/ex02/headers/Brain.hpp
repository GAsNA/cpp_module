/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:38:21 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 23:13:37 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:
		Brain(void);
		Brain(Brain const &cpy);
		Brain const &operator=(Brain const &rhs);
		~Brain(void);
		void set_idea(std::string);
		std::string get_one_idea(int nb) const;

	private:
		std::string _ideas[100];
		int	_last_idea;
};

#endif
