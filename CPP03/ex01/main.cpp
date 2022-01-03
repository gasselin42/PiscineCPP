#include "ScavTrap.hpp"

int main(void) {
    ClapTrap clap("Mark");
    ScavTrap scav("Mario");

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

    return 0;
}
