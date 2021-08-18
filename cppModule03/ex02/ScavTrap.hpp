#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &scavtrap);
	ScavTrap& operator=(const ScavTrap &scavTrap);
	~ScavTrap(void);
	void guardGate(void); 
};

#endif