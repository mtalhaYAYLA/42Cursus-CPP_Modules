/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:02 by myayla            #+#    #+#             */
/*   Updated: 2024/04/19 16:54:29 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj)
{
    this->data_map = obj.data_map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{
    this->data_map = obj.data_map;
    return *this;
}

int BitcoinExchange::date_control(std::string str)
{
    int day = 0;
    int month = 0;
    int year = 0;

    if(str.length() != 10)
    {
        std::cout << "Error: bad date format => " << str << std::endl;
        return 1;
    }
    year = stoi(str.substr(0, 4));                   
    month = stoi(str.substr(5, 2));
    day = stoi(str.substr(8, 2));

    if(day < 1 || day > 31)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    if(month < 1 || month > 12)
    {
        std::cout << "Error: bad month => " << str << std::endl;
        return 1;
    }
    if(year < 2000 || year > 2024)
    {
        std::cout << "Error: bad year => " << str << std::endl;
        return 1;
    }
    if(str[4] != '-' || str[7] != '-')
    {
        std::cout << "Error: bad date format => " << str << std::endl;
        return 1;
    }
    if(month == 2 && day > 29)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    if(month == 2 && day == 29 && year % 4 != 0)
    {
        std::cout << "Error: bad day => " << str << std::endl;
        return 1;
    }
    return 0;
}

int BitcoinExchange::value_control(double value)
{

   long value2 = static_cast<long>(value);


    if(value2 < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return 1;
    }
    else if (value2 > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 1;
    }
    return 0;
}

int BitcoinExchange::open_file(std::string argv)
{
    std::ifstream data_file;
    std::ifstream input_file(argv.c_str());
    std::string str;
    std::string data;
    int i = 0;
    data_file.open("data.csv");
    double amount = 0.0;
    if(!data_file.is_open())
    {
        std::cerr << "File Error!" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "File opened successfully!" << std::endl;
        read_data(data_file);
    }
    if(!input_file)
    {
        std::cerr << "File Error!" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "File opened successfully!" << std::endl;
        getline(input_file, str);
        while(getline(input_file, str))
        {
            this->read_input(str);
        }
    }

    data_file.close();
    input_file.close();
    return 0;
}

std::string BitcoinExchange::read_input(std::string str)
{
    std::string line;
    std::string result;
    std::string data;
    double amount = 0.0;
    

    size_t found = str.find('|');
    amount = atof(str.substr(found + 1).c_str());
    data = str.substr(0, found - 1);
    if(found == std::string::npos)
    {
        std::cout << "Error: bad input => " << str << std::endl;
        return result;
    }
    if(date_control(data) == 1 || value_control(amount) == 1)
    {
        return result;
    }
    if(!str.empty())
    {
        std::map<std::string,double>::iterator it = this->data_map.find(data.c_str());
        if(it != this->data_map.end())
        {
            std::cout << data << " => " << amount << " = " << it->second * amount << std::endl;
        }
        else if (it != this->data_map.begin())
        {
            it = this->data_map.lower_bound(data.c_str());
            if(it != this->data_map.begin())
                it--;
            std::cout << data << " => " << amount << " = " << it->second * amount << std::endl;
        }
    }
    return result;
}

std::string BitcoinExchange::read_data(std::ifstream& my_file)
{
    std::string str;
    double value = 0.0;
    int i = 0;
    getline(my_file, str);
    while (!(my_file.eof()))
    {
        getline(my_file, str);
        std::stringstream	ss(str);
        std::string date,rate;
        getline(ss, date, ',');
        getline(ss, rate);
        this->data_map[date] = atof(rate.c_str());
        
    }

    return str;
}