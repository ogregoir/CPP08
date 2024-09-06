/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:25:47 by marvin            #+#    #+#             */
/*   Updated: 2024/09/05 15:25:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <iostream>
#include <iterator>

template<typename T>

class MutantStack : public std::stack<T>
{
    public :
        MutantStack(){}
        MutantStack(const MutantStack &copy){
            *this = copy;
        }
        MutantStack& operator=(const MutantStack &copy){
            *this = copy;
            return this;
        }
        ~MutantStack(){}

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }

};