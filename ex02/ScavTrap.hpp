#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& src);
        ScavTrap& operator=(const ScavTrap& rhs);
        ~ScavTrap();

        // ClapTrap'in saldırısını eziyoruz (Override)
        void attack(const std::string& target);
        
        // ScavTrap'e özel yepyeni bir yetenek
        void guardGate();
};

#endif