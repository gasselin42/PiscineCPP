/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:17:50 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/10 14:51:39 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	comment[0] = "DEBUG";
	comment[1] = "INFO";
	comment[2] = "WARNING";
	comment[3] = "ERROR";

	functptr[0] = &Karen::debug;
	functptr[1] = &Karen::info;
	functptr[2] = &Karen::warning;
	functptr[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Karen::complain( std::string level ) {
	int i = -1;
	
	while (++i < 4) {
		if (level.compare(comment[i]) == 0)
			(this->*functptr[i])();
	}
}

int	Karen::get_level( std::string level ) {
	int i = -1;
	
	while (++i < 4) {
		if (level.compare(comment[i]) == 0) {
			break ;
		}
	}
	return (i);
}