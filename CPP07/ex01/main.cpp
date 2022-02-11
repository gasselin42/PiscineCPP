/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:50:11 by gasselin          #+#    #+#             */
/*   Updated: 2022/02/11 11:04:47 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int nums[5] = {0, 1, 2, 3, 4};
	
	std::string message[5] = {"Bonjour", "Comment", "Ça", "Va", "?"};

	char helloworld[11] = {'H', 'E', 'L', 'L', 'O', ' ', 'W', 'O', 'R', 'L', 'D'};

	iter(nums, 5, print);
	std::cout << std::endl;

	iter(message, 5, print);
	std::cout << std::endl;

	iter(helloworld, 11, print);
	std::cout << std::endl;
}
