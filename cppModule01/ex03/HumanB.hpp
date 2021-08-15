#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:

	std::string nameB;
	Weapon *weaponB;

public:

	HumanB(void);

	HumanB(std::string name);

	void setWeapon(Weapon &weapon);

	void attack();

	~HumanB(void);
};

#endif