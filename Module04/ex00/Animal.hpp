/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:08:27 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:08:29 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
	Animal(void);
    Animal(std::string type);
    Animal(const Animal& src);

    virtual ~Animal(void);

    Animal& operator=(const Animal& rhs);
    
	virtual void	makeSound(void) const;
    std::string		getType(void) const;
};

#endif