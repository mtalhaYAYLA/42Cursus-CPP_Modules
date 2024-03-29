/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AllClasses.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:22:27 by myayla            #+#    #+#             */
/*   Updated: 2024/03/29 14:22:28 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <cstdlib>
# include <iostream>
# include <ctime>

#define red  "\033[1;31m"
#define green  "\033[1;32m"
#define blue  "\033[1;34m"
#define reset  "\033[0m"


class Base
{
public:
	virtual		~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif