/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:56:49 by myayla            #+#    #+#             */
/*   Updated: 2024/04/01 14:56:51 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(T value) {
    std::cout << value << " ";
}

template <typename T>
void iter(T* arr, size_t length, void (*func)(T const &)) {
    for (size_t i = 0; i < length; ++i) {
        func(arr[i]);
    }
}

#endif