/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:50:11 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/26 21:55:54 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int nums[5] = {0, 1, 2, 3, 4};
	
	std::string hello[5] = {"H", "E", "L", "L", "O"};

	char world[5] = {'W', 'O', 'R', 'L', 'D'};

	iter(nums, 5, print);
	std::cout << std::endl;

	iter(hello, 5, print);
	std::cout << std::endl;

	iter(world, 5, print);
	std::cout << std::endl;
}
