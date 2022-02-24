/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:54:35 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/24 14:29:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
};

#endif
