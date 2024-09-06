/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:40:44 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/03 17:18:42 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iterator>
#include <algorithm>


template<typename T>

typename T::iterator easyfind(T &data, int nbr)
{
    typename T::iterator it = std::find(data.begin(), data.end(), nbr);
    if (it != data.end())
        return it;
    else
        throw std::exception();
    return it;
}