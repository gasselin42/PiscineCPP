/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:28:04 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/21 12:06:28 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MUTANTSTACK_HPP
#define HUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
    typedef typename std::stack<T>::container_type container_type;
	typedef typename container_type::iterator iterator;
	typedef typename container_type::const_iterator const_iterator;
	typedef typename container_type::reverse_iterator reverse_iterator;
	typedef typename container_type::const_reverse_iterator const_reverse_iterator;
 
    MutantStack() : std::stack<T>() {};
    MutantStack(const MutantStack& other) { *this = other; };
    MutantStack& operator=(const MutantStack& rhs)
    {
		std::stack<T>::operator=(rhs);
        return *this;
    };
	virtual ~MutantStack() {};

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

	const_iterator begin() const { return this->c.begin(); }
	const_iterator end() const { return this->c.end(); }

    reverse_iterator rbegin() { return this->c.rbegin(); }
    reverse_iterator rend() { return this->c.rend(); }

	const_reverse_iterator rbegin() const { return this->c.rbegin(); }
	const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif

// https://stackoverflow.com/questions/610245/where-and-why-do-i-have-to-put-the-template-and-typename-keywords

// https://www.boost.org/doc/libs/1_66_0/libs/spirit/doc/html/spirit/advanced/customize/iterate/container_iterator.html

// https://devblogs.microsoft.com/oldnewthing/20190619-00/?p=102599

// https://www.guru99.com/stack-in-cpp-stl.html

// https://docs.microsoft.com/en-us/cpp/standard-library/stack-class?view=msvc-170