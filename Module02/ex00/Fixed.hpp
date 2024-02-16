/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:14:50 by myayla            #+#    #+#             */
/*   Updated: 2024/02/14 14:16:54 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
private:
    int number;
    static const int fractionalBit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed &operator=(const Fixed &other);
    Fixed(const Fixed &original);
    int getRawBits(void) const;
    void setRawBits(int const raw);

};