/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:50:04 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/11 10:47:21 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

template <typename T>
void iter(T *arr, int len, void (*fn)(T&)) {
    for (int i = 0; i < len; i++)
        (*fn)(arr[i]);
}

template<typename T>
void print(T &item)
{
	std::cout << item << "\n";
}