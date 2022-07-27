/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <rleseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:30:35 by rleseur           #+#    #+#             */
/*   Updated: 2022/07/27 21:04:56 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data		*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
