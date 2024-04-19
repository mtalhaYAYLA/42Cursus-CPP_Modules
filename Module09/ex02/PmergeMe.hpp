/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myayla <myayla@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:27 by myayla            #+#    #+#             */
/*   Updated: 2024/04/19 15:49:30 by myayla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <ctime>

class PmergeMe
{
    private:
        std::list<unsigned int> list;
        std::vector<unsigned int> vec;
    
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        void init(char** argv, int argc);
        void mergeList(int argc);
        void mergeVector(int argc);
        
        std::list<unsigned int> mergeStartList(std::list<unsigned int> &list);
        std::list<unsigned int> mergeSortList(std::list<unsigned int> &list1, std::list<unsigned int> &list2);
        
        std::vector<unsigned int> mergeStartVector(std::vector<unsigned int> &vec);
        std::vector<unsigned int> mergeSortVector(std::vector<unsigned int> &vec1, std::vector<unsigned int> &vec2);


};

#endif