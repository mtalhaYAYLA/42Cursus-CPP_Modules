/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:13:25 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:13:27 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia has beed created" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "Abstract materia has beed constructed" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia has beed destroyed" << std::endl;
}

AMateria::AMateria(AMateria const & ref) : type(ref.type)
{
	std::cout << "Abstract materia has beed constructed from a copy" << std::endl;
}

std::string const & AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}