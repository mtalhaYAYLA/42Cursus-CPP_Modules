/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:09:28 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:09:31 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
	WrongAnimal(void);
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& src);

    ~WrongAnimal(void);

    WrongAnimal& operator=(const WrongAnimal& rhs);
    
	void	makeSound(void) const;
    std::string		getType(void) const;
};

#endif