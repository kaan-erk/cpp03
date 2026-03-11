#include "ScavTrap.hpp"

#define CYAN    "\033[1;36m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"

int main(void)
{
    std::cout << CYAN;
    std::cout << "   _______ " << std::endl;
    std::cout << "  /       \\" << std::endl;
    std::cout << " |  [O] [O] |" << std::endl;
    std::cout << " |   _____  |" << std::endl;
    std::cout << " |  /_____\\ |" << std::endl;
    std::cout << "  \\_______/ " << std::endl;
    std::cout << "    |   |   " << std::endl;
    std::cout << "   /|___|\\  " << std::endl;
    std::cout << RESET << std::endl;

    std::cout << GREEN << "\n--- 1. CREATION (CHAIN TEST) ---" << RESET << std::endl;
    ScavTrap a("KaanBot");
    ScavTrap b("EnemyBot");

    std::cout << GREEN << "\n--- 2. OVERRIDDEN ACTIONS ---" << RESET << std::endl;
    a.attack("EnemyBot");
    b.takeDamage(20);
    b.beRepaired(10);

    std::cout << YELLOW << "\n--- 3. SPECIAL ABILITY ---" << RESET << std::endl;
    a.guardGate();

    std::cout << GREEN << "\n--- 4. DESTRUCTION (CHAIN TEST) ---" << RESET << std::endl;
    
    return (0);
}