/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:19:00 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/04 13:51:45 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

# include "Form.hpp"
class Form;

class Bureaucrat
{
	private:
		std::string	_name;
		int	_grade;
		int	checkGrade(int grade) const;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat();

		std::string getName(void) const;
		int			getGrade(void) const;

		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form *f);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too high! (Bureaucrat)";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return "Grade too low! (Bureaucrat)";
				}
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif
