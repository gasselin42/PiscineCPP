/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:25:34 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:25:02 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <ctime>

#define MAX 15000

class Span {
private:
    std::vector<int> vec;
    unsigned int    size;

public:
    Span() : vec(0), size(0) {}
    Span(unsigned int N);
    Span(const Span & rhs);
    Span & operator=(const Span & rhs);
    ~Span() {}

    void addNumber(const int n);
    int shortestSpan();
    int longestSpan();

    void fillVector();

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
