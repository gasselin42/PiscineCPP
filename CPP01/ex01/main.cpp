/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:49:18 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 14:55:08 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*Horde = NULL;
	
	Horde = Horde->zombieHorde(10, "Joe");
	delete [] Horde;
	return 0;
}