/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:06:41 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 10:53:52 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* ******************************************************************** */
/*  NOT:        					          	   						*/
/*  Bürokrat sınıfı, bir kişinin adını ve bir puanını içerir.  			*/
/*  Form sınıfı ise bir formun adını, imzalı olup olmadığını,			*/
/*  imzalamak için gerekli notu ve uygulamak için gereken notu içerir.	*/
/* ******************************************************************** */

int main()
{
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 39);
		ShrubberyCreationForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john", 19);
		RobotomyRequestForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
	{
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
		Bureaucrat B("john",3);
		PresidentialPardonForm A("target");
		B.signAForm(A);
		B.executeForm(A);
		std::cout << "-----------------------------------------------------------------------------" << std::endl;
	}
}