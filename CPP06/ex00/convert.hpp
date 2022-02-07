/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:51:17 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/07 15:10:19 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <exception>
#include <ctype.h>
#include <iomanip>
#include <cmath>

class Convert {
 public:
    typedef enum ScalarTypes { isChar, isInt, isFloat, isDouble, isPseudo, error } ScalarTypes;

 private:
    std::string input;
    int     Int;
    char    c;
    float   Float;
    double  Double;
    ScalarTypes Type;

 public:
    Convert();
    Convert(const std::string & str);
    Convert(const Convert & rhs);
    Convert & operator=(const Convert & rhs);
    ~Convert() {};

    void toInt();
    void toChar();
    void toFloat();
    void toDouble();

    void find_type();
    void cast_type();
    bool is_pseudo(std::string & str);
};
