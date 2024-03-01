/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:08:45 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:08:47 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << this->type << " constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
    if(this == &dog)
        return *this;
    this->type = dog.getType();
    return *this;
}
