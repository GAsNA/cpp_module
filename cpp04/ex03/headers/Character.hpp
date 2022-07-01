/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:51:46 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/01 09:05:23 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_items[4];

	public:
		Character(std::string &name);
		Character(Character const &cpy);
		Character &operator=(Character const &rhs);
		~Character();

		/*virtual*/std::string const &getName() const;
		/*virtual*/void equip(AMateria* m);
		/*virtual*/void unequip(int idx);
		/*virtual*/void use(int idx, ICharacter& target);
};

#endif
