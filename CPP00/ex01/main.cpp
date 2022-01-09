/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:22:47 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/09 15:19:50 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string		line;
	int			i;

	while (42)
	{
		std::cout << std::endl;
		std::cout << "Please enter one of the following commands :" << std::endl;
		std::cout << "'ADD'		: Add a new contact" << std::endl;
		std::cout << "'SEARCH'	: See the informations of a contact" << std::endl;
		std::cout << "'EXIT'		: Close the Phonebook and delete contacts" << std::endl;
		std::cout << "> ";
		getline(std::cin >> std::ws, line);
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
			std::cout << "Error: Invalid command" << std::endl;
	}
	return 0;
}