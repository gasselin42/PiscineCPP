/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:42:34 by gasselin          #+#    #+#             */
/*   Updated: 2021/12/08 14:53:11 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() { this->name = ""; }

Zombie::~Zombie() {
	std::cout << "<" << name << ">" << " has been killed!" << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}