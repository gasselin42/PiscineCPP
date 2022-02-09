/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:59:23 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/09 14:11:38 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstring>
#include <exception>

template <class T>
class Array {
private:
    T           *arr;
    unsigned int size_;

public:
    Array() : arr(new T[0]), size_(0) {};
    Array(unsigned int n) : arr(new T[n]), size_(n) {};
    Array(const Array & rhs) : arr(NULL) { *this = rhs; };
    Array & operator=(const Array& rhs);
    ~Array() { delete [] arr; };

    T & operator[](unsigned int i);

    unsigned int size() const { return size_; }
};

template <typename T>
Array<T> & Array<T>::operator=(const Array & rhs)
{
    delete [] arr;
    size_ = rhs.size();
    arr = new T[size_];
    std::memcpy(arr, rhs.arr, size() * sizeof(T));

    return *this;
}

template <typename T>
T & Array<T>::operator[](unsigned int i)
{
    if (i >= size_ || i < 0)
        throw std::exception();
    return arr[i];
}
