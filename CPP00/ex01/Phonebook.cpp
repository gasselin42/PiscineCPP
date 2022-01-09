/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:18:43 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/09 15:21:48 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {}
Phonebook::~Phonebook() {}

void	Phonebook::get_contact(void) {
	int	index;
	std::string	line;

	std::cout << "Enter an index: ";
	getline(std::cin >> std::ws, line);
	index = atoi(line.c_str());
	if (index >= 0 && index <= 7 && this->contacts[index].get_number("active") == 1) {
		std::cout << "FIRST NAME: " << this->contacts[index].get_str("first_name") << std::endl;
		std::cout << "LAST NAME: " << this->contacts[index].get_str("last_name") << std::endl;
		std::cout << "NICKNAME: " << this->contacts[index].get_str("nickname") << std::endl;
		std::cout << "PHONE NUMBER: " << this->contacts[index].get_str("phone_nb") << std::endl;
		std::cout << "SECRET: " << this->contacts[index].get_str("secret") << std::endl;
	}
	else
		std::cout << "\033[0;31mError: Invalid index\e[0m" << std::endl;
}

void	Phonebook::search_contact(void) {
	int	i;
	
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << std::endl;
	i = -1;
	while (++i < 8 && this->contacts[i].get_number("active"))
	{
		std::cout << "|" << std::setw(10) << this->contacts[i].get_number("index") << "|";
		if (this->contacts[i].get_str("first_name").length() > 10)
			std::cout << this->contacts[i].get_str("first_name").substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_str("first_name") << "|";
		if (this->contacts[i].get_str("last_name").length() > 10)
			std::cout << this->contacts[i].get_str("last_name").substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_str("last_name") << "|";
		if (this->contacts[i].get_str("nickname").length() > 10)
			std::cout << this->contacts[i].get_str("nickname").substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << this->contacts[i].get_str("nickname") << "|" << std::endl;
	}
	std::cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << std::endl;
	get_contact();
}

void	Phonebook::add_contact(void) {
	int	i;

	i = 7;
	while (i > 0)
	{
		this->contacts[i] = this->contacts[i - 1];
		this->contacts[i].get_number("index")++;
		i--;
	}
	this->contacts[0].get_number("active") = 1;
	std::cout << "Enter FIRST NAME: ";
	getline(std::cin >> std::ws, this->contacts[0].get_str("first_name"));
	std::cout << "Enter LAST NAME: ";
	getline(std::cin >> std::ws, this->contacts[0].get_str("last_name"));
	std::cout << "Enter NICKNAME: ";
	getline(std::cin >> std::ws, this->contacts[0].get_str("nickname"));
	std::cout << "Enter PHONE NUMBER: ";
	getline(std::cin >> std::ws, this->contacts[0].get_str("phone_nb"));
	std::cout << "Enter SECRET: ";
	getline(std::cin >> std::ws, this->contacts[0].get_str("secret"));
}
