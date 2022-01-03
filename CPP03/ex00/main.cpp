#include "ClapTrap.hpp"

int main(void) {
    ClapTrap clap("Mark");

    std::cout << std::endl;

    clap.attack("John");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.beRepaired(10);
    clap.takeDamage(20);

    return 0;
}
