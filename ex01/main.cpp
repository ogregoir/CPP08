/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:34:39 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/10 13:39:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(145);
        sp.addNumber(70);
        sp.addNumber(8);
        sp.addNumber(96);
        sp.addNumber(25);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}
/*
int main()
{
    try
    {
        Span sp = Span(9);
        
        sp.addNumber(8);
        sp.addNumber(2);
        sp.addNumber(9);
        sp.addNumber(6);

        sp.multiadd(20, 1020);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::vector<int> stock = sp.GetStock();
        for(size_t i = 0; i < stock.size(); i++)
            std::cout << stock[i] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}*/