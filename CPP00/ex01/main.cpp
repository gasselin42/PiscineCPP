/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:22:47 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/07 14:17:04 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
using namespace std;

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	string		line;
	int			i;

	while (42)
	{
		cout << endl;
		cout << "Please enter one of the following commands :" << endl;
		cout << "'ADD'		: Add a new contact" << endl;
		cout << "'SEARCH'	: See the informations of a contact" << endl;
		cout << "'EXIT'		: Close the Phonebook and delete contacts" << endl;
		cout << "> ";
		getline(cin >> ws, line);
		i = -1;
		while (line[++i])
			line[i] = toupper(line[i]);
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search_contact();
		else if (line == "EXIT")
			break ;
		else
			cout << "Error: Invalid command" << endl;
	}
	return 0;
}