#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string type;
public:
	Ice(void);
	Ice(const Ice &ice);
	Ice& operator=(const Ice &ice);
	~Ice();
	AMateria* clone() const;
	void use(ICharacter &icharacter);
};

#endif