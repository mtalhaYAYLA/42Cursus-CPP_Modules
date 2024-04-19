/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:05 by myayla            #+#    #+#             */
/*   Updated: 2024/04/19 15:49:08 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN
{
private:
    std::stack<int> Rpn;
public:
    RPN(std::string &av);
    RPN();
    RPN &operator=(const RPN &obj);
    RPN(const RPN &obj);
    ~RPN();
    void calculate(std::stack<int> &stack, std::stack<char> &operators);
};
#endif