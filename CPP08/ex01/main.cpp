/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:16:36 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/28 15:19:34 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
	{
		std::cout << "======================\n";
		std::cout << "|| EMPTY ARRAY TEST ||\n";
		std::cout << "======================\n" << std::endl;
		
		Span sp0(0);
		
		std::cout << "sp0: \n";
		try {
			std::cout << "Short span: " << sp0.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Long span: " << sp0.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;

		Span sp1(1); //size 1
		
		std::cout << "sp1: \n";
		try {
			std::cout << "Short span: " << sp1.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << "Long span: " << sp1.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		std::cout << "=====================\n";
		std::cout << "|| ADD NUMBER TEST ||\n";
		std::cout << "=====================\n" << std::endl;
		
		Span sp(5);
		
		try {
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "Short span: " << sp.shortestSpan() << std::endl;
			std::cout << "Long span: " << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		std::cout << "===============================\n";
		std::cout << "|| ADD NUMBER EXCEPTION TEST ||\n";
		std::cout << "===============================\n" << std::endl;
		
		try {
			Span sp(MAX);

			sp.fillVector();
			sp.addNumber(5); // should throw an exception
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;

	{
		std::cout << "=========================\n";
		std::cout << "|| BIG ARRAY SPAN TEST ||\n";
		std::cout << "=========================\n" << std::endl;
		
		try {
			Span sp(MAX);

			sp.fillVector();

			std::cout << "Short span: " << sp.shortestSpan() << std::endl;
			std::cout << "Long span: " << sp.longestSpan() << std::endl;
					
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}