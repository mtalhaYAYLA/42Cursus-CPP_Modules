/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:11:27 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:11:28 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		WrongCat& operator=(const WrongCat &wrongCat);
		void	makeSound(void) const;
};

#endif