/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 16:53:18 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_name;
		bool		_signed;
		int		_grade_sign;
		int		_grade_exec;

		void		checkGrade(int grade) const;

	public:
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm();

		std::string	getName() const;
		bool		isSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void	beSigned(Bureaucrat *b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high! (ShrubberyCreationForm)";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low! (ShrubberyCreationForm)";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &scf);

#endif
