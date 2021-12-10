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

std::string	replace_s1(std::string line, std::string s1, std::string s2) {
	size_t	i;

	i = line.find(s1);
	while (i != std::string::npos) {
		line.erase(i, s1.length());
		line.insert(i, s2);
		i = line.find(s1, i);
	}
	return line;
}

int	main(int argc, char **argv) {
	std::ofstream	ofs;
	std::ifstream	ifs;
	std::string		line;

	if (argc != 4) {
		std::cout << "Error: 3 arguments needed!" << std::endl;
		return 0;
	}
	ifs.open(argv[1]);
	if (ifs.fail()) {
		std::cout << "Input file error!" << std::endl;
		return 0;
	}
	ofs.open(strcat(argv[1], ".replace"));
	if (ofs.fail()) {
		std::cout << "Output file error!" << std::endl;
		return 0;
	}
	while (!ifs.eof()) {
		getline(ifs, line);
		std::cout << line << std::endl;
		if (line.find(argv[2]) != std::string::npos)
			line = replace_s1(line, argv[2], argv[3]);
		ofs << line;
		if (ifs.eof())
			break ;
		ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}
