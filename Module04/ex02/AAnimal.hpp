/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:11:52 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:11:53 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
	AAnimal(void);
    AAnimal(std::string type);
    AAnimal(const AAnimal& src);

    virtual ~AAnimal(void);

    AAnimal& operator=(const AAnimal& rhs);
    
	virtual void	makeSound(void) const = 0;
    std::string		getType(void) const;
};

#endif