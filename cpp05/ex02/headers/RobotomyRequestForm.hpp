/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/05 16:57:36 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_name;
		bool		_signed;
		int		_grade_sign;
		int		_grade_exec;

		void		checkGrade(int grade) const;

	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm();

		std::string	getName() const;
		bool		isSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		void	beSigned(Bureaucrat *b);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high! (RobotomyRequestForm)";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low! (RobotomyRequestForm)";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &rrf);

#endif
