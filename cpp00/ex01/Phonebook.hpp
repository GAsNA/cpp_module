/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:32:33 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/21 13:52:51 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	get_all_contacts();

	private:
		int		nb_contacts;
		int		index;
		Contact contacts[8];
};

#endif
