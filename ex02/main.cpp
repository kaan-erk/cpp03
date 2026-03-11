#include <iostream>
#include "FragTrap.hpp"

#define CYAN    "\033[1;36m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"

int main(void)
{
    std::cout << CYAN;
    std::cout << "    _.-._" << std::endl;
    std::cout << "   | | | |_" << std::endl;
    std::cout << "   | | | | |" << std::endl;
    std::cout << "   | | | | |" << std::endl;
    std::cout << " _ |  '-._ |" << std::endl;
    std::cout << " \\`\\`-.'-._;" << std::endl;
    std::cout << "  \\    '   |" << std::endl;
    std::cout << "   \\  .`  / " << std::endl;
    std::cout << "    |    |  " << std::endl;
    std::cout << RESET << std::endl;

    std::cout << GREEN << "\n--- 1. CREATION (CHAIN TEST) ---" << RESET << std::endl;
    FragTrap a("KaanFrag");
    FragTrap b("EnemyFrag");

    std::cout << GREEN << "\n--- 2. BASIC ACTIONS (INHERITED) ---" << RESET << std::endl;
    a.attack("EnemyFrag");
    b.takeDamage(30);
    b.beRepaired(15);

    std::cout << YELLOW << "\n--- 3. SPECIAL ABILITY ---" << RESET << std::endl;
    a.highFivesGuys();

    std::cout << GREEN << "\n--- 4. DESTRUCTION (CHAIN TEST) ---" << RESET << std::endl;
    
    return (0);
}