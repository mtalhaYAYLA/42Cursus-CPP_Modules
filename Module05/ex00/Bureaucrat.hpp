/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:04:02 by myayla            #+#    #+#             */
/*   Updated: 2024/03/21 09:04:07 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUERAUCRAT_HPP
#define BUERAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
    
    public:
    class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
