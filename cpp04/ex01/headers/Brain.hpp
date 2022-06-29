/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:38:21 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 17:59:58 by rleseur          ###   ########.fr       */
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

	private:
		std::string _ideas[100];
};

#endif
