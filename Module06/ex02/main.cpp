/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:22:34 by myayla            #+#    #+#             */
/*   Updated: 2024/03/29 14:22:35 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AllClasses.hpp"

int	main()
{
	
	Base *newGeneratedClass;

	newGeneratedClass = generate();
	identify(newGeneratedClass);
	identify(*newGeneratedClass);
	delete newGeneratedClass;
	
	return 0;
}