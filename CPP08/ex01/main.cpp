/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:16:36 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/21 13:47:48 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	std::cout << std::endl;

	{
		std::cout << "\033[0;31mEXCEPTION TESTS\033[0m\n\n";
		
		Span sp0(0);
		
		std::cout << "size 0 : \n";
		try {
			std::cout << "Short span : " << sp0.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Long span : " << sp0.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;

		Span sp1(1);
		sp1.addNumber(50);
		
		std::cout << "size 1 + addNumber(50) : \n";
		try {
			std::cout << "Short span : " << sp1.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Long span : " << sp1.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		std::cout << "\033[0;31m5 NUMBERS TEST\033[0m\n\n";
		
		Span sp(5);
		
		try {
			sp.addNumber(3);
			sp.addNumber(5);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "Short span : " << sp.shortestSpan() << std::endl;
			std::cout << "Long span : " << sp.longestSpan() << std::endl;
	
			std::cout << "\n\033[0;31mMAX SIZE EXCEPTION TEST\033[0m\n\n";
			sp.addNumber(5); // should throw an exception
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		std::cout << "\033[0;31m15,000 NUMBERS TEST\033[0m\n\n";
		
		try {
			Span sp(15000);

			sp.fillDeque(15000);

			std::cout << "Short span : " << sp.shortestSpan() << std::endl;
			std::cout << "Long span : " << sp.longestSpan() << std::endl;
					
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;
}