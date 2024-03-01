/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:08:39 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:08:41 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &cat);
		Cat& operator=(const Cat &cat);
		void	makeSound(void) const;
};

#endif