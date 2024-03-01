/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:12:34 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:12:35 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
    return 0;
}