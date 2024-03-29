/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:09:18 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:09:20 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << this->type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal " << this->type << " constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = animal;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
    this->type = animal.getType();
    return *this;
}

void	WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}