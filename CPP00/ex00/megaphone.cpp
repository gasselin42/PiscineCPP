/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:41:20 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/09 15:24:15 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cctype>
#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				putchar(toupper(argv[i][j]));
		}
		std::cout << std::endl;
	}
	return 0;
}
