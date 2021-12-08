/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:18:43 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/07 14:23:27 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {}
Phonebook::~Phonebook() {}

void	Phonebook::get_contact(void) {
	int	index;
	string	line;

	cout << "Enter an index: ";
	getline(cin >> ws, line);
	index = atoi(line.c_str());
	if (index >= 0 && index <= 7 && this->contacts[index].get_number("active") == 1) {
		cout << "FIRST NAME: " << this->contacts[index].get_str("first_name") << endl;
		cout << "LAST NAME: " << this->contacts[index].get_str("last_name") << endl;
		cout << "NICKNAME: " << this->contacts[index].get_str("nickname") << endl;
		cout << "PHONE NUMBER: " << this->contacts[index].get_str("phone_nb") << endl;
		cout << "SECRET: " << this->contacts[index].get_str("secret") << endl;
	}
	else
		cout << "\033[0;31mError: Invalid index\e[0m" << endl;
}

void	Phonebook::search_contact(void) {
	int	i;
	
	cout << "|-------------------------------------------|" << endl;
	cout << "|   index  |first name| last name| nickname |" << endl;
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
	i = -1;
	while (++i < 8 && this->contacts[i].get_number("active"))
	{
		cout << "|" << setw(10) << this->contacts[i].get_number("index") << "|";
		if (this->contacts[i].get_str("first_name").length() > 10)
			cout << this->contacts[i].get_str("first_name").substr(0, 9) << ".|";
		else
			cout << setw(10) << this->contacts[i].get_str("first_name") << "|";
		if (this->contacts[i].get_str("last_name").length() > 10)
			cout << this->contacts[i].get_str("last_name").substr(0, 9) << ".|";
		else
			cout << setw(10) << this->contacts[i].get_str("last_name") << "|";
		if (this->contacts[i].get_str("nickname").length() > 10)
			cout << this->contacts[i].get_str("nickname").substr(0, 9) << ".|" << endl;
		else
			cout << setw(10) << this->contacts[i].get_str("nickname") << "|" << endl;
	}
	cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
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
	cout << "Enter FIRST NAME: ";
	getline(cin >> ws, this->contacts[0].get_str("first_name"));
	cout << "Enter LAST NAME: ";
	getline(cin >> ws, this->contacts[0].get_str("last_name"));
	cout << "Enter NICKNAME: ";
	getline(cin >> ws, this->contacts[0].get_str("nickname"));
	cout << "Enter PHONE NUMBER: ";
	getline(cin >> ws, this->contacts[0].get_str("phone_nb"));
	cout << "Enter SECRET: ";
	getline(cin >> ws, this->contacts[0].get_str("secret"));
}
