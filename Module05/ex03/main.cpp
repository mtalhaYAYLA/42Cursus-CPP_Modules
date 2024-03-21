/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:11:36 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 09:12:36 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

/* ******************************************************************** */
/*  NOT:        					          	   						*/
/*  Bürokrat sınıfı, bir kişinin adını ve bir puanını içerir.  			*/
/*  Form sınıfı ise bir formun adını, imzalı olup olmadığını,			*/
/*  imzalamak için gerekli notu ve uygulamak için gereken notu içerir.	*/
/* ******************************************************************** */

int main()
{
	{
		std::string formName = "robotomy request"; 
		std::string formTarget = "Gorms";
		
		Intern intern;
		Bureaucrat bureaucrat("John", 1);
		AForm *f = intern.makeForm(formName, formTarget);
		std::cout << *f;
		bureaucrat.signAForm(*f);
		std::cout << (*f).getSigned() << std::endl;
		bureaucrat.executeForm(*f);
		delete f;
	}
}