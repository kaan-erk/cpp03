#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("Default_Scav") {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Default constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Constructor called for " << this->_name << ". A new powerhouse is born!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called for " << this->_name << ". Powering down." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints--;
        std::cout << "ScavTrap " << this->_name << " fiercely attacks " << target 
                  << ", dealing " << this->_attackDamage << " massive points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->_name << " is out of energy or heavily damaged and cannot attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    if (this->_hitPoints > 0) {
        std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode! None shall pass!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->_name << " is too broken to guard any gates." << std::endl;
    }
}