/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:19:20 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/30 10:24:25 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &cpy);
		Dog &operator=(Dog const &rhs);
		~Dog(void);
		std::string getType(void) const;
		void makeSound(void) const;
		Brain &getBrain(void) const;

	private:
		Brain *_brain;
};

#endif
