/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:53:52 by gasselin          #+#    #+#             */
/*   Updated: 2022/01/04 13:53:53 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    ClapTrap clap("Mark");
    ScavTrap scav("Mario");
    FragTrap frag("Vanessa");
    DiamondTrap diamond("Connor");

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

    frag.attack("Kyle");
    frag.takeDamage(70);
    frag.beRepaired(30);
    frag.beRepaired(125);
    frag.takeDamage(200);
    frag.highFivesGuys();

    std::cout << std::endl;

    diamond.attack("Cameron");
    diamond.takeDamage(70);
    diamond.beRepaired(15);
    diamond.beRepaired(60);
    diamond.takeDamage(100);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    std::cout << std::endl;

    return 0;
}
