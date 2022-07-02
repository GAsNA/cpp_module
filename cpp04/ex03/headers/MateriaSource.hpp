/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:27:56 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/02 14:02:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &cpy);
		MateriaSource &operator=(MateriaSource const &rhs);
		~MateriaSource();
		/*virtual*/void learnMateria(AMateria* am);
		/*virtual*/AMateria* createMateria(std::string const &type);
	
	private:
		AMateria *_items[4];
};

#endif
