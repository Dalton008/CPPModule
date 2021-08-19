#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

#include <iostream>
#include <string>

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *amateria[4];
public:
	Character(void);
	Character(std::string name);
	Character(const Character &character);
	~Character(void);
	Character& operator=(const Character &character);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif