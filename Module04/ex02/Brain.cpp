/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:11:58 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:12:00 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain(const Brain& brain)
{
    *this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &brain ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}