/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:48:24 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/11 16:04:17 by ogregoir         ###   ########.fr       */
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

std::vector<int> Span::GetStock()
{
	return stock;
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

void Span::multiadd(int begin, int last)
{
	if (begin < last)
	{
		std::vector<int> mult;
		
		for (int i = begin; i != last + 1; i++)
			mult.push_back(i);

		std::vector<int>::iterator it = stock.end();
		std::vector<int>::iterator first = mult.begin();
		std::vector<int>::iterator end = mult.end();
		
		if (last - begin + stock.size() <= len)
			stock.insert(it, first, end);
		else
			throw std::exception();
	}
	else
		throw std::exception();
	
}
