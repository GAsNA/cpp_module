/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:19:00 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/01 16:04:36 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <>string

class Bureaucrat
{
	private:
		std::string	_name;
		int	_grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat();

		std::string getName(void);
		int			getGrade(void);

		void incrementGrade(void);
		void decrementGrade(void);
};

#endif
