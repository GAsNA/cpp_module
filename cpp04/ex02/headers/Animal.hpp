/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:17:33 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/01 09:00:39 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		virtual ~Animal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
		virtual Brain &getBrain(void) const = 0;
};

#endif
