/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:34 by myayla            #+#    #+#             */
/*   Updated: 2024/04/19 15:48:36 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc,char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Usage: ./ex00 [filename]" << std::endl;
        return 1;
    }
    BitcoinExchange bs;
    bs.open_file(argv[1]);


    return 0;
}
