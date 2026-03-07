#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Default constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called for " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target 
                  << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->_name << " can't attack. No hit points or energy points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints > amount) {
        this->_hitPoints -= amount;
    } else {
        this->_hitPoints = 0;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount 
              << " points of damage! Hit points left: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints--;
        this->_hitPoints += amount;
        std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount 
                  << " hit points! Total hit points: " << this->_hitPoints << std::endl;
    } else {
        std::cout << "ClapTrap " << this->_name << " can't be repaired. No hit points or energy points left!" << std::endl;
    }
}