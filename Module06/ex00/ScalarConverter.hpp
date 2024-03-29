/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:21:13 by myayla            #+#    #+#             */
/*   Updated: 2024/03/29 14:21:15 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cmath>
#include <sstream>
#include <cstdlib>

class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(std::string const &value);
    ScalarConverter(ScalarConverter const &src);
    ~ScalarConverter();

    ScalarConverter &operator=(ScalarConverter const &rhs);

    void convert(std::string str);
    static void toChar(std::string str);
    static void toInt(std::string str);
    static void toFloat(std::string str);
    static void toDouble(std::string str);

};

#endif