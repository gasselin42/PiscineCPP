/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:44:22 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 14:48:53 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name ) {
	int	i = -1;
	Zombie	*new_zombie = new Zombie[N];

	while (++i < N) {
		new_zombie[i].name = name;
		new_zombie[i].announce();
	}
	return new_zombie;
}