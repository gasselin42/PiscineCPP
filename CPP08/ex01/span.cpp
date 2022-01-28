/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:39:46 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:24:30 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : size(N) {
    vec.reserve(N);
}

Span::Span(const Span & rhs) : vec(rhs.vec), size(rhs.size) {}

Span & Span::operator=(const Span & rhs) {
    vec = rhs.vec;
    size = rhs.size;
    
    return *this;
}

void Span::addNumber(const int n)
{
    if (vec.size() >= size)
        throw MaxSizeReached();
    vec.push_back(n);
}

void Span::fillVector()
{
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i < MAX; i++)
        vec.push_back(rand());
}

int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw NoLongSpan();
        
    std::vector<int> tmp;
	std::vector<int>::iterator first = vec.begin();
	std::vector<int>::iterator second;
	
	for (; second != vec.end(); first++)
	{
		second = first + 1;
		int diff = abs(*first - *second);
		tmp.push_back(diff);
	}
	return (*(std::max_element(tmp.begin(), tmp.end())));
}

int Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw NoShortSpan();
        
    std::vector<int> tmp;
	std::vector<int>::iterator first = vec.begin();
	std::vector<int>::iterator second;
	
	for (; second != vec.end(); first++)
	{
		second = first + 1;
		int diff = abs(*first - *second);
		tmp.push_back(diff);
	}
	return (*(std::min_element(tmp.begin(), tmp.end())));
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