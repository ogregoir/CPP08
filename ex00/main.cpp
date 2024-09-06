/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:58:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/09/03 17:32:59 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

/*int main()
{
    std::vector<int> v;
    int search = 2;
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    
    try
    {
        std::vector<int>::iterator it = easyfind(v, search);
        std::cout << *it << " find" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "not find" << '\n';
    }
    return 0;
}*/

int main()
{
    std::list<int> v;
    int search = 36;
    v.push_back(36);
    v.push_back(25);
    v.push_back(10);
    v.push_back(24);
    
    try
    {
        std::list<int>::iterator it = easyfind(v, search);
        std::cout << *it << " find" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "not find" << '\n';
    }
    return 0;
}