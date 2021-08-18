#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
protected:

	std::string name;
	int			hitpoints;
	int			energyPoints;
	int			attackDamage;

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap& operator=(const ClapTrap &clapTrap);
	virtual ~ClapTrap(void);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
