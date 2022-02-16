/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:25:34 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/16 16:03:52 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <deque>
#include <algorithm>
#include <ctime>
#include <numeric>

#define MAX 15000

class Span {
private:
    std::deque<int> deq;
    unsigned int    size;

public:
    Span() : deq(0), size(0) {}
    Span(unsigned int N);
    Span(const Span & rhs);
    Span & operator=(const Span & rhs);
    ~Span() {}

    void addNumber(const int n);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    void fillDeque();

    class MaxSizeReached : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    class NoShortSpan : public std::exception {
        public:
            virtual const char * what() const throw();
    };

    class NoLongSpan : public std::exception {
        public:
            virtual const char * what() const throw();
    };
};
