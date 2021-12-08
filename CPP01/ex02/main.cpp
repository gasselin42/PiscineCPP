/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:10:34 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 16:06:22 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "&string = " << &string << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "&stringREF = " << &stringREF << std::endl;

	std::cout << "string = " << string << std::endl;
	std::cout << "*stringPTR = " << *stringPTR << std::endl;
	std::cout << "stringREF = " << stringREF << std::endl;
}

