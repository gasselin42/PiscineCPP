/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:03:47 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 18:05:53 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert() : input(""), Int(0), c(0), Float(0.0f), Double(0.0), Type(isInt) {}

Convert::Convert(const std::string& input)
    : input(input), Int(0), c(0), Float(0.0f), Double(0.0), Type(isInt)
{
    find_type();
    if (Type != error)
        cast_type();
}

Convert::Convert(const Convert & rhs)
{
    *this = rhs;
}

Convert & Convert::operator=(const Convert & rhs)
{
    input = rhs.input;
    c = rhs.c;
    Int = rhs.Int;
    Float = rhs.Float;
    Double = rhs.Double;
    Type = rhs.Type;
    
    return *this;
}

void Convert::toInt()
{
    std::cout << "int: ";
    if (Type == error)
        std::cout << "Impossible";
    else if ((Type == isFloat || Type == isDouble) && 
            (Double != Double || Double == std::numeric_limits<double>::infinity())) {
            std::cout << "Impossible";
    } else 
        std::cout << Int;

    std::cout << std::endl;
}

void Convert::toChar()
{
    // std::cout << Type << std::endl;
    // std::cout << Int << std::endl;
    // std::cout << c << std::endl;
    // std::cout << Float << std::endl;
    // std::cout << Double << std::endl;
    
    // std::cout << std::endl;
    
    std::cout << "char: ";
    if (Type == error)
        std::cout << "Impossible";
    else if ((Type == isFloat || Type == isDouble) && 
            (Double != Double || Double == std::numeric_limits<double>::infinity())) {
            std::cout << "Impossible";
    } else if (c < 32 || c > 126)
        std::cout << "Non displayable";
    else 
        std::cout << "'" << c << "'";

    std::cout << std::endl;
}

void Convert::toFloat()
{
    std::cout << "float: ";
    if (Type == error) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    
    if (input == "+inf")
        std::cout << "+";
    
    std::cout << std::fixed << std::setprecision(1) << Float << "f" << std::endl;
}

void Convert::toDouble()
{
    std::cout << "double: ";
    if (Type == error) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    
    if (input == "+inf")
        std::cout << "+";
    
    std::cout << std::fixed << std::setprecision(1) << Double << std::endl;
}

void Convert::find_type()
{
	char *endptr = NULL;
	
    if (input.length() == 1 && std::isalpha(input[0])) {
        c = input[0];
        Type = isChar;
    } else {
        if (input.find('.') != std::string::npos || is_pseudo(input))
        {
            if (is_pseudo(input)) {
                if (input == "nanf" || input == "inff" || input == "-inff" || input == "+inff")
                    input.erase(input.end() - 1);
                Double = strtod(input.c_str(), NULL);
                Type = isPseudo;
            }
            if (input == "nanf" || input == "inff" || input == "-inff" || input == "+inff")
                ;
            else if (input.find('.') != std::string::npos && input[input.length() - 1] == 'f')
            {
                Type = isFloat;
                input.erase(input.end() - 1);
                Float = std::strtof(input.c_str(), &endptr);
            } else {
                Type = isDouble;
                Float = std::strtof(input.c_str(), &endptr);
            }
            if (endptr && *endptr != '\0')
                Type = error;
        } else {
            Type = isInt;
            Int = static_cast<int>(std::strtol(input.c_str(), &endptr, 10));
            if (*endptr != '\0')
                Type = error;
        }
    }
}

void Convert::cast_type() {
    switch (Type) {
        case isInt: {
            c = static_cast<char>(Int);
            Float = static_cast<float>(Int);
            Double = static_cast<double>(Int);
            break;
        }
        case isChar: {
            Int = static_cast<int>(c);
            Float = static_cast<float>(c);
            Double = static_cast<double>(c);
            break;
        }
        case isFloat: {
            Int = static_cast<int>(Float);
            c = static_cast<char>(Float);
            Double = static_cast<double>(Float);
            break;
        }
        case isDouble: {
            Int = static_cast<int>(Double);
            Float = static_cast<float>(Double);
            c = static_cast<char>(Double);
            break;
        }
        case isPseudo:
            Int = static_cast<int>(Double);
            Float = static_cast<float>(Double);
            c = static_cast<char>(Double);
            break;
        case error:
            break;
    }
}

bool Convert::is_pseudo(std::string & str) {
    return (str == "nan" || str == "nanf" || str == "inf" || str == "-inf" ||
            str == "+inf" || str == "inff" || str == "-inff" || str == "+inff");
}
