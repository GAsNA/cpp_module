/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:48:22 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/09 16:45:06 by rleseur          ###   ########.fr       */
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
		virtual void	executeConcrete() const;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm();
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &rrf);

#endif
