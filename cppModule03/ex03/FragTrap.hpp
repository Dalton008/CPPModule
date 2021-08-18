#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap& operator=(const FragTrap &fragTrap);
	void highFivesGuys(void);
	virtual ~FragTrap(void);
};

#endif