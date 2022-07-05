/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 17:03:00 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_name;
		bool		_signed;
		int		_grade_sign;
		int		_grade_exec;

		void		checkGrade(int grade) const;

	public:
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm();

		std::string	getName() const;
		bool		isSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void	beSigned(Bureaucrat *b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high! (PresidentialPardonForm)";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low! (PresidentialPardonForm)";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &scf);

#endif
