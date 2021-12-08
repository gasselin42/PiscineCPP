/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:41:20 by gasselin          #+#    #+#             */
/*   Updated: 2021/11/24 11:28:51 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	
	if (argc == 1)
		puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				putchar(toupper(argv[i][j]));
		}
		cout << endl;
	}
	return 0;
}
