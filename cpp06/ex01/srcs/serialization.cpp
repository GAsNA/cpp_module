/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:30:35 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 20:58:41 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t r = 0;
	uintptr_t raw = r;
	r = ptr->i;
	r++;
	return raw;
}

Data		*deserialize(uintptr_t raw)
{
	Data *ptr = NULL;
	ptr->i = raw;
	raw++;
	return ptr;
}
