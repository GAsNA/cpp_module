/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identification.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 21:23:46 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/28 00:35:27 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFICATION_HPP
# define IDENTIFICATION_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

# include <iostream>
# include <cstdlib>

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
