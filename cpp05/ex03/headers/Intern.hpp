/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:37:01 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/09 16:41:20 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

# include <iostream>
# include <string>

class Intern
{
	public:
		Intern();
		Intern(Intern const & cpy);
		Intern &operator=(Intern const & rhs);
		~Intern();

		Form *makeForm(std::string nameForm, std::string target);
};

#endif
