#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *amateria[4];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource& operator=(const MateriaSource &materisSource);
	~MateriaSource(void);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif