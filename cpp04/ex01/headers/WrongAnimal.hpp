/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:17:33 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 18:05:07 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

# include "Brain.hpp"

class WrongAnimal
{
	protected:
		std::string	_type;
		Brain	*_brain;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &cpy);
		WrongAnimal &operator=(WrongAnimal const &rhs);
		~WrongAnimal(void);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif
