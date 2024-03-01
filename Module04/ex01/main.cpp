/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:10:59 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:11:01 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
	std::cout << std::endl << "Dog & Cat created" << std::endl << std::endl;
    delete j;
    delete i;
	std::cout << std::endl << "Dog & Cat deleted" << std::endl << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
	std::cout << std::endl << "Dog basic is deleted" << std::endl << std::endl;
    const Animal* animals[4] = 
	{ 
	new Dog(),
	new Dog(),
	new Cat(),
	new Cat()
	};
	std::cout << std::endl << "4 animals created" << std::endl << std::endl;
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
		std::cout << "-----Deleted-----" << std::endl;
    }
    return 0;
}