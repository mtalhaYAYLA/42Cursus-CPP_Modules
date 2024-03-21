/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:05:10 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 09:05:15 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/* ******************************************************************** */
/*  NOT:        					          	   						*/
/*  Bürokrat sınıfı, bir kişinin adını ve bir puanını içerir.  			*/
/*  Form sınıfı ise bir formun adını, imzalı olup olmadığını,			*/
/*  imzalamak için gerekli notu ve uygulamak için gereken notu içerir.	*/
/* ******************************************************************** */

int main()
{
	Bureaucrat bureaucrat_1("Manager", 3);
	Bureaucrat bureaucrat_2("Assistant", 43);
	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;

	Form form_1("Form_1", 5, 10); // Form_1'in imzalanması için 5, uygulanması için 10 puan gereklidir.
	std::cout << "--------------------------------------" << std::endl;
	std::cout << form_1 << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	
	Form form_2("Form_2", 5499, 10);
	std::cout << "--------------------------------------" << std::endl;
	
	bureaucrat_1.signForm(form_1);

	std::cout << form_1 << std::endl;
	
	bureaucrat_2.signForm(form_1);
	
	std::cout << form_1 << std::endl;
	return 0;
}