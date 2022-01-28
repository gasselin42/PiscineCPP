/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:47:49 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 17:29:06 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void print_error(const char * msg) {
    std::cerr << msg << std::endl;
    exit (EXIT_FAILURE);
}

int main(int argc, char** argv)
{
    if (argc != 2)
        print_error("\nUSAGE: ./convert [argument]\n");

    std::string input(argv[1]);

    if (input.empty())
        print_error("\nError: Empty Argument\n");

    Convert convert(argv[1]);

    convert.toChar();
    convert.toInt();
    convert.toFloat();
    convert.toDouble();
}