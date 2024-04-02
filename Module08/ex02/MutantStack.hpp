/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:21:32 by myayla            #+#    #+#             */
/*   Updated: 2024/04/02 11:21:33 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <iostream>
#include <iterator>

template<  typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack const &object);
		MutantStack & operator=(MutantStack const &obj);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator end();
		iterator begin();
		const_iterator end() const;
		const_iterator begin() const;
};

#include "MutantStack.tpp"

#endif