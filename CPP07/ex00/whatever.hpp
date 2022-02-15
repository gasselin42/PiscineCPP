/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:25:45 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/14 11:42:22 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

template <typename T>
void swap(T & a, T & b) {
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T & min(T & a, T & b) {
    return (a < b) ? a : b;
}

template <typename T>
T & max(T & a, T & b) {
    return (a > b) ? a : b;
}