/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:57:29 by myayla            #+#    #+#             */
/*   Updated: 2024/04/01 14:57:34 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <class T>
class Array
{
    public:
        Array()
        {
            _arr = new T[0];
        }
        Array(unsigned int n)
        {
            _arr = new T[n];
            _size = n;
        }
        Array(Array const & src)
        {
            _arr = new T[src._size];
            _size = src._size;
            for (unsigned int i = 0; i < _size; i++)
                _arr[i] = src._arr[i];
        }
        ~Array()
        {
            delete [] _arr;
        }
        Array & operator=(Array const & src)
        {
            if (this != &src)
            {
                delete [] _arr;
                _arr = new T[src._size];
                _size = src._size;
                for (unsigned int i = 0; i < _size; i++)
                    _arr[i] = src._arr[i];
            }
            return *this;
        }
        T & operator[](unsigned int i)
        {
            if (i < 0 || i >= _size)
                throw std::out_of_range("Index out of range");
            return _arr[i];
        }
        unsigned int size() const
        {
            return _size;
        }
    private:
        T * _arr;
        unsigned int _size;
};

#endif
