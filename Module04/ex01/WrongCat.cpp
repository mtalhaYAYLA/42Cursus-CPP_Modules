/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:11:21 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:11:22 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << this->type << " constructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
    if(this == &wrongCat)
        return *this;
    this->type = wrongCat.getType();
    return *this;
}
