#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string weaponName;

public:

	Weapon(void);

	Weapon(std::string weapon);

	std::string const &getType(void);

	void setType(std::string weapon);

	~Weapon (void);
};

#endif