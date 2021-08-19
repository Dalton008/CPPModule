#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal 
{
private:
	Brain *brain;
public:
	Dog(void);
	Dog(const Dog &dog);
	Dog& operator=(const Dog &dog);
	virtual void makeSound(void) const;
	std::string getType(void) const;
	~Dog(void);
};

#endif