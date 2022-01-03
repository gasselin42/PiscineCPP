#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ClapTrap clap("Mark");
    ScavTrap scav("Mario");
    FragTrap frag("Vanessa");

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

    return 0;
}
