/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:11:15 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 09:11:16 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &src)
{
    (void)src;
    return (*this);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *formTypes[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            delete formTypes[(i + 2) % 3];
			delete formTypes[(i + 1) % 3];
            return (formTypes[i]);
        }
    }
    std::cout << "Intern could not create " << formName << std::endl;
	delete formTypes[2];
	delete formTypes[0];
	delete formTypes[1];
	throw std::out_of_range("Form not found");

    return (NULL);
}