/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:21:58 by myayla            #+#    #+#             */
/*   Updated: 2024/03/29 14:22:02 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::~Serializer()
{
    
}

Serializer::Serializer(Serializer const &src)
{
    *this = src;
}

Serializer &Serializer::operator=(Serializer const &rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t convert = reinterpret_cast<uintptr_t>(ptr);
	return convert;
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*convert = reinterpret_cast<Data*>(raw);
	return convert;
}