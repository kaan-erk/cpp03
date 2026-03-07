#include <iostream>
#include "ClapTrap.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"

int main(void) {
    std::cout << YELLOW << "         />_________________________________" << RESET << std::endl;
    std::cout << YELLOW << "[########" << CYAN << "[]" << RED << "_________________________________>" << RESET << std::endl;
    std::cout << YELLOW << "         \\>" << RESET << std::endl << std::endl;

    std::cout << GREEN << "--- 1. CREATION (OCF TEST) ---" << RESET << std::endl;
    ClapTrap a("Kaan");
    ClapTrap b("Enemy");
    ClapTrap c(a);
    ClapTrap d;
    
    d = b;
    std::cout << std::endl;

    std::cout << GREEN << "--- 2. BASIC ACTIONS ---" << RESET << std::endl;
    a.attack("Enemy");
    b.takeDamage(0);
    
    b.takeDamage(5);
    b.beRepaired(3);
    std::cout << std::endl;

    std::cout << GREEN << "--- 3. ENERGY DEPLETION TEST ---" << RESET << std::endl;
    for (int i = 0; i < 11; i++) {
        a.attack("Punching Bag");
    }
    std::cout << std::endl;

    std::cout << GREEN << "--- 4. DEATH TEST ---" << RESET << std::endl;
    b.takeDamage(20);
    
    b.attack("Kaan");
    b.beRepaired(5);
    std::cout << std::endl;

    std::cout << GREEN << "--- 5. DESTRUCTION ---" << RESET << std::endl;
    return 0;
}