/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:17:33 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 13:16:46 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(Animal const &cpy);
		Animal &operator=(Animal const &rhs);
		virtual ~Animal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
