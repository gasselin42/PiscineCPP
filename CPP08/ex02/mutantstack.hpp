/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:28:04 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:31:35 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
    typedef typename std::stack<T>::container_type::iterator iterator;
 
    MutantStack(){};
    MutantStack(const MutantStack& other) { *this = other; };
    MutantStack& operator=(const MutantStack& rhs)
    {
        std::stack<T>::operator=(rhs);
        return *this;
    };
    ~MutantStack() {};

    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
};