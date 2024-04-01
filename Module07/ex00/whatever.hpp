/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:56:42 by myayla            #+#    #+#             */
/*   Updated: 2024/04/01 14:56:44 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T>
T min(T &r1, T &r2)
{
    if(r1 > r2)
        return r2;
    else
        return r1;
}

template<class T>
T max(T &r1, T &r2)
{
    if(r1 > r2)
        return r1;
    else
        return r2;
}

template<class T>
void swap(T &r1, T &r2)
{
    T temp(r1);
    r1 = r2;
    r2 = temp;
}

// in compile time, the compiler will generate the following code:
// void swap(int &r1, int &r2)
// {
//     int temp(r1);
//     r1 = r2;
//     r2 = temp;
// }

#endif