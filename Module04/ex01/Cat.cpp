/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:10:24 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:10:26 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

void	Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    *this = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
        this->brain = new Brain(*cat.brain);
    }
    return *this;
}

Cat::~Cat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
    delete this->brain;
}
