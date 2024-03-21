/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:04:34 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 09:04:36 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
    this->grade = 99;
}

Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name)
{
    try
    {
        if(_grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->grade = _grade;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        const_cast<std::string&>(this->name) = other.getName();
        this->grade = other.grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}        
void Bureaucrat::incrementGrade()
{
    try
    {
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        this->grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        if(this->grade > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (this->grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else
            this->grade++;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) 
{
        os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
        return os;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too Low");
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn’t sign" << form.getName() << " because " << e.what() << std::endl;
    }
}