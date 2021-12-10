/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:15:28 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/10 14:52:41 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen;
	int	i;

	if (argc != 2) {
		std::cout << "Only 1 argument needed" << std::endl;
		exit (1);
	}

	i = karen.get_level(argv[1]);
	
	switch (i) {
	case 0 :
		karen.complain("DEBUG");
	case 1 :
		karen.complain("INFO");
	case 2 :
		karen.complain("WARNING");
	case 3 :
		karen.complain("ERROR");
		break ;
	default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}