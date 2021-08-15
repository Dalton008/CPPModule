#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string nameA;
	Weapon &weaponA;

public:

	HumanA(std::string name, Weapon &weapon);

	void attack();

	~HumanA(void);
};

#endif