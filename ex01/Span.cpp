/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:48:24 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/06 19:51:40 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : len(0) {
}

Span::Span(const Span &copy) :  len(copy.len), stock(copy.stock) {
}

Span::Span(unsigned int nbr) : len(nbr) {
}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        len = copy.len;
        stock = copy.stock;
    }
    return *this;
}

Span::~Span() {
    
}

void  Span::addNumber(int nbr)
{
    if(stock.size() >= len)
        throw std::out_of_range("Span full");
    stock.push_back(nbr);
}


int Span::shortestSpan()
{
    unsigned int i = 0;
    int s = 0;
    int temp = 0;

    if(stock.size() < 2)
    {
        throw std::exception();
    }
    else
    {
        std::sort(stock.begin(), stock.end());
        for (unsigned int j = 0; j < stock.size() ; j++)
        {
            if (j + 1 != stock.size())
                temp = stock[j + 1] - stock[j];
            if (s == 0 || (temp < s && stock[j] != stock[i]))
                s = temp;
        }
        i++;
    }
    std::cout << "shortest Span is : ";
    return s;
}

int Span::longestSpan()
{
    if(stock.size() < 2)
        throw std::exception();
    else
        std::sort(stock.begin(), stock.end());
    std::cout << "longest Span is : ";
    return (stock[stock.size() - 1] - stock[0]);
}

void Span::multiadd(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    while (start != end)
    {
        this->addNumber(*start);
        start++;
    }     
}
