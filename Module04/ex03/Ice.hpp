/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:14:16 by myayla            #+#    #+#             */
/*   Updated: 2024/03/01 13:14:41 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & ref);
		Ice & operator=(Ice const & ref);
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
	private:
		std::string type;
};

#endif