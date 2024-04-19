/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:20 by myayla            #+#    #+#             */
/*   Updated: 2024/04/19 15:48:23 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CPP
#define BITCOINEXCHANGE_CPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string,double> data_map;
        
        
        std::string read_data(std::ifstream& my_file);
        std::string read_input(std::string infile);
        int date_control(std::string str);
        int value_control(double value);

    public:
        int open_file(std::string argv);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &obj);
        BitcoinExchange &operator=(const BitcoinExchange &obj);
};

#endif