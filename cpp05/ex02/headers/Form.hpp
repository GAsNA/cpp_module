/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 14:12:45 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <cstdlib>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	protected:
		std::string	_name;
		bool		_signed;
		int			_grade_sign;
		int			_grade_exec;
		std::string	_target;

		void		checkGrade(int grade) const;
		Form();
		virtual void	executeConcrete() const = 0;

	public:
		Form(std::string name, int grade_sign, int grade_exec, std::string target);
		virtual ~Form();

		std::string	getName() const;
		bool		isSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		std::string	getTarget() const;

		void	beSigned(const Bureaucrat & b);
		void	execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low!";
				}
		};

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Form is already signed.";
				}
		};
};

#endif
