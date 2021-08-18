#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap& operator=(const DiamondTrap &diamondTrap);
	void whoAmI();
	~DiamondTrap(void);
};

#endif