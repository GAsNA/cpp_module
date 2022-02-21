/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:33:39 by rleseur           #+#    #+#             */
/*   Updated: 2022/02/21 14:47:48 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <cstdlib>
class Contact
{
	public:
		Contact();
		~Contact();
		void	setFirstname(std::string fn);
		void	setLastname(std::string ln);
		void	setNickname(std::string n);
		void	setPhone(std::string phone);
		void	setSecret(std::string secret);
		void	put_contact(int index);
		void	put_infos();

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
};

#endif
