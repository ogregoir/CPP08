/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:48:38 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/10 13:18:25 by marvin           ###   ########.fr       */
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
		std::vector<int> GetStock();
		int shortestSpan();
		int longestSpan();
		void multiadd(int begin, int last);
};

