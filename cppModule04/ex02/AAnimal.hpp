#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal(void);
	AAnimal(const AAnimal &animal);
	AAnimal& operator=(const AAnimal &animal);
	virtual void makeSound() const = 0;
	virtual std::string getType(void) const = 0;
	virtual ~AAnimal(void);
};

#endif