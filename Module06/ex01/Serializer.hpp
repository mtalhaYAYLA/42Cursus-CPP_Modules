/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:22:07 by myayla            #+#    #+#             */
/*   Updated: 2024/03/29 14:22:08 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <stdint.h>
#include <iostream>
#include <cstdlib>
#include <string>

typedef struct Data
{
    std::string name;
    int age;
}Data;

class Serializer
{
	public:
        Serializer();
		Serializer(Serializer const &object);
		Serializer & operator=(Serializer const &rhs);
		~Serializer();
		uintptr_t	serialize(Data *ptr);
		Data *deserialize(uintptr_t raw);
};

#endif