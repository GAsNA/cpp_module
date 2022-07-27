/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:18:21 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 20:54:46 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_HPP
# define SERIALISATION_HPP

# include <iostream>
# include <stdint.h>

typedef struct s_data	Data;

struct s_data
{
	int	i;
};

uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);

#endif
