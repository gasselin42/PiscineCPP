/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:40:00 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 15:02:30 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	name1 = "Alex";
	std::string	name2 = "Bob";
	Zombie	*zombie = NULL;

	std::cout << "Start main" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Creating a zombie named " << name1 << " using newZombie" << std::endl;
	zombie = zombie->newZombie(name1);
	zombie->announce();
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Creating a zombie named " << name2 << " using randomChump" << std::endl;
	zombie->randomChump(name2);
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	delete zombie;
	std::cout << "End main" << std::endl;
	return (0);
}