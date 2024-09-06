/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:48:38 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/06 19:49:12 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private :
		unsigned int		len;
		std::vector<int>	stock;
		
	public :
		Span();
		Span(const Span &copy);
		Span(unsigned int len);
		Span &operator=(const Span &copy);
		~Span();
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();
		void multiadd(std::vector<int>::iterator start, std::vector<int>::iterator end);
};

