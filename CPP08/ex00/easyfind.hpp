/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:11:45 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:30:45 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &arr, const int &target)
{
	typename T::iterator index;
	
    for (index = arr.begin(); index < arr.end(); index++)
        if (*index == target)
            return index;
	throw std::exception();
    return index;
}