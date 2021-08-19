#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal 
{
public:
	Dog(void);
	Dog(const Dog &dog);
	Dog& operator=(const Dog &dog);
	virtual void makeSound() const;
	~Dog(void);
};

#endif