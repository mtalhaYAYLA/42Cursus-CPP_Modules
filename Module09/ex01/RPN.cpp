/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:48:58 by myayla            #+#    #+#             */
/*   Updated: 2024/04/19 15:49:01 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(std::string &av)
{
    std::stack<int> stack;
    std::stack<char> operators;

    int i = 0;
    while (av[i])
    {
        if (av[i] >= '0' && av[i] <= '9')
        {
            stack.push(av[i] - '0');
        }
        if(av[i] == '+' || av[i] == '-' || av[i] == '*' || av[i] == '/')
        {
            operators.push(av[i]);
        }
        if(stack.size() >= 2 && operators.size() == 1)
        {
           calculate(stack, operators);
        }
        i++;
    }
    this->Rpn = stack;
    if(this->Rpn.size() == 1)
    {
        std::cout << this->Rpn.top() << std::endl;
    }
    else
    {
        std::cerr << "Error: Invalid expression." << std::endl;
    }

}

void RPN::calculate(std::stack <int> &stack, std::stack <char> &operators)
{
   
    int x, y;
    char c;

    y = stack.top();
    stack.pop();
    x = stack.top();
    stack.pop();
    c = operators.top();
    operators.pop();


    if(c == '/' && y == 0)
    {
        std::cerr << "Error: Division by zero." << std::endl;
        return;
    }

    if(c == '+')
    {
        stack.push(x + y);
    }
    else if(c == '-')
    {
        stack.push(x - y);
    }
    else if(c == '*')
    {
        stack.push(x * y);
    }
    else if(c == '/')
    {
        stack.push(x / y);
    }
}

RPN::RPN(const RPN &obj)
{
    this->Rpn = obj.Rpn;
}

RPN &RPN::operator=(const RPN &obj)
{
    this->Rpn = obj.Rpn;
    return *this;
}

RPN::~RPN()
{

}