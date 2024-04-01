/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:56:58 by myayla            #+#    #+#             */
/*   Updated: 2024/04/01 14:57:00 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, print);
    std::cout << std::endl;

    std::string arr2[] = {"one", "two", "three", "four", "five"};
    iter(arr2, 5, print);
    std::cout << std::endl;

    return 0;
}