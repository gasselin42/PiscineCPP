/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 09:50:58 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/10 13:24:30 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

int	nb_lines(char *argv) {
	std::string	line;
	std::ifstream	ifs(argv);
	int	i = 0;

	while (getline(ifs, line))
		i++;
	ifs.close();
	return i;
}

std::string	replace_s1(std::string line, std::string s1, std::string s2) {
	size_t	i;

	i = line.find(s1, 0);
	while (i != std::string::npos) {
		line.erase(i, s1.length());
		line.insert(i, s2);
		i = line.find(s1, i + strlen(s2.c_str()));
	}
	return line;
}

int	main(int argc, char **argv) {
	std::string		line;

	if (argc != 4) {
		std::cout << "Error: 3 arguments needed!" << std::endl;
		return 0;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string str[nb_lines(argv[1])];

	std::ifstream	ifs(argv[1]);
	if (ifs.fail()) {
		std::cout << "Input file error!" << std::endl;
		return 0;
	}

	int i = 0;
	while (std::getline(ifs, str[i]))
		i++;
	ifs.close();

	for (int j = 0; j < i; j++) {
		if (str[j].find(s1) != std::string::npos) 
			str[j] = replace_s1(str[j], s1, s2);
	}

	std::ofstream	ofs(strcat(argv[1], ".replace"));
	if (ofs.fail()) {
		std::cout << "Output file error!" << std::endl;
		return 0;
	}
	
	for (int j = 0; j < i; j++)
		ofs << str[j] << std::endl;

	ofs.close();
	return 0;
}
