/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:23:46 by rleseur           #+#    #+#             */
/*   Updated: 2022/06/29 23:22:37 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cpy);
		Cat &operator=(Cat const &rhs);
		~Cat(void);
		std::string getType(void) const;
		void makeSound(void) const;
		Brain &getBrain(void) const;

	private:
		Brain *_brain;
};

#endif
