/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:39:46 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/16 16:18:58 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span & rhs) { *this = rhs; }

Span & Span::operator=(const Span & rhs) {
    size = rhs.size;

    if (size > 0)
    {
        this->deq.resize(size);
        std::copy(rhs.deq.begin(), rhs.deq.end(), this->deq.begin());
    }

    return *this;
}

void Span::addNumber(const int n)
{
    if (deq.size() >= size)
        throw MaxSizeReached();
    deq.push_back(n);
}

void Span::fillDeque()
{
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < MAX; i++)
        deq.push_back(rand());
}

unsigned int Span::longestSpan()
{
    if (deq.size() <= 1)
        throw NoLongSpan();

    Span tmp(*this);
    
    std::deque<int>::iterator it = std::min_element(tmp.deq.begin(), tmp.deq.end());
    return (*std::max_element(tmp.deq.begin(), tmp.deq.end()) - *it);
}

unsigned int Span::shortestSpan()
{
    if (deq.size() <= 1)
        throw NoShortSpan();

    Span tmp(*this);

    std::deque<int>::iterator it = std::min_element(tmp.deq.begin(), tmp.deq.end());
    unsigned int num = *it;
    tmp.deq.erase(it);
    return (*std::min_element(tmp.deq.begin(), tmp.deq.end()) - num);
}

const char * Span::MaxSizeReached::what() const throw() {
    return "Max size reached";
}

const char * Span::NoShortSpan::what() const throw() {
    return "Short span can't be found";
}

const char * Span::NoLongSpan::what() const throw() {
    return "Long span can't be found";
}