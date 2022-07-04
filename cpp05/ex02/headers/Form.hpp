/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/04 13:51:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		std::string	_name;
		bool		_signed;
		int			_grade_sign;
		int			_grade_exec;

		int			checkGrade(int grade) const;

	public:
		Form(std::string name, int grade_sign, int grade_exec);
		Form(Form const &cpy);
		Form &operator=(Form const &rhs);
		~Form();

		std::string	getName() const;
		bool		isSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void	beSigned(Bureaucrat *b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high! (Form)";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low! (Form)";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif
