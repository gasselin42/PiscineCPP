/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:59:01 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/11 11:17:57 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

struct tmp{
	std::string str;
};

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	
    try {
        numbers[-2] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
	
    try {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand();

    delete [] mirror;

	Array<tmp> Temp(11);
	Temp[0].str = "H";
	Temp[1].str = "E";
	Temp[2].str = "L";
	Temp[3].str = "L";
	Temp[4].str = "O";
	Temp[5].str = " ";
	Temp[6].str = "W";
	Temp[7].str = "O";
	Temp[8].str = "R";
	Temp[9].str = "L";
	Temp[10].str = "D";

	std::cout << std::endl;

	for (int i = 0; i < 11; i++)
		std::cout << Temp[i].str << std::endl;
	
    return 0;
}