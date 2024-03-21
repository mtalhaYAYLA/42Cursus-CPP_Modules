/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:04:12 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 09:04:17 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* **********************************************************************/
/*  NOT:        					          	   						*/
/*  Derece ne kadar düşükse, o kadar yüksek bir konuma sahiptir.		*/
/* **********************************************************************/

int main()
{
	Bureaucrat b("Bob", 10);
	std::cout << b << std::endl;
	b.incrementGrade();
	std::cout << b << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	Bureaucrat be("Jack", -8);
	std::cout << be << std::endl;
	return 0;
}