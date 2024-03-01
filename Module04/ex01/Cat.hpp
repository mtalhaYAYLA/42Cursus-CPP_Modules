/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:10:32 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:10:33 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
    public:
		Cat(void);
		virtual ~Cat(void);

	 	Cat( const Cat& src );
    	Cat& operator=( const Cat& src );
		void	makeSound(void) const;
};

#endif