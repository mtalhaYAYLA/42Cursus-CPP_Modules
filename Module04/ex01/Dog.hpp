/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:10:52 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:10:54 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
    public:
		Dog(void);
		virtual ~Dog(void);

	 	Dog( const Dog& src );
    	Dog& operator=( const Dog& src );
		void	makeSound(void) const;
};

#endif