#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap& operator=(const FragTrap &fragTrap);
	void highFivesGuys(void);
	~FragTrap(void);

};

#endif