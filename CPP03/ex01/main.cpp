/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:51:33 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 13:51:34 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ClapTrap clap("Mark");
    ScavTrap scav("Mario");

    std::cout << std::endl;

    clap.attack("John");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.beRepaired(10);
    clap.takeDamage(20);

    std::cout << std::endl;

    scav.attack("Emilio");
    scav.takeDamage(70);
    scav.beRepaired(15);
    scav.beRepaired(60);
    scav.takeDamage(150);
    scav.guardGate();

    std::cout << std::endl;

    return 0;
}
