/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:21:28 by myayla            #+#    #+#             */
/*   Updated: 2024/03/29 14:21:52 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Serializer	seri;
	Data *serialized = new Data;
	serialized->name = "jon";
	serialized->age = 30;
	uintptr_t i = seri.serialize(serialized);
	std::cout << "i: " << i << std::endl;
	Data	*deserialized = seri.deserialize(i);
	std::cout << "name: " << deserialized->name << std::endl;
	std::cout << "age: " << deserialized->age << std::endl;
	
	delete serialized;

}