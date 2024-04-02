/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:20:39 by myayla            #+#    #+#             */
/*   Updated: 2024/04/02 11:20:43 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>


template<typename T>
typename T::iterator easyfind(T& data, int indx)
{
    typename T::iterator it = std::find(data.begin(), data.end(), indx);
    if(it == data.end())
    {
        throw std::runtime_error("Value not found in data");
    }
    return it;
}


#endif