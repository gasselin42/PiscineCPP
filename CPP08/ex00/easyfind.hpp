/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:11:45 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/16 13:36:36 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <exception>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &arr, const int &target)
{
	typename T::iterator index;
	
    index = std::find(std::begin(arr), std::end(arr), target);
    if (index == std::end(arr))
	    throw std::exception();
    return index;
}