/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:57:39 by myayla            #+#    #+#             */
/*   Updated: 2024/04/01 14:57:41 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
int main()
{
    Array<int> a(5);

    for (unsigned int i = 0; i < 5; i++)
        a[i] = i;
    for (unsigned int i = 0; i < 5; i++)
        std::cout << a[i] << std::endl;
    
    std::cout << "---------------------" << std::endl;

    try
    {
        std::cout << a[6] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}