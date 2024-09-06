/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:34:39 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/06 19:59:45 by ogregoir         ###   ########.fr       */
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
        Span sp = Span(1000);
        std::vector<int> mult;
        for (unsigned int i = 0; i < 1000; i++)
            mult.push_back(i);
        sp.multiadd(mult.begin(), mult.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}*/