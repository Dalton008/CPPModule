#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
private:
	Brain *brain;
public:
	Dog(void);
	Dog(const Dog &dog);
	Dog& operator=(const Dog &dog);
	virtual void makeSound() const;
	~Dog(void);
};

#endif