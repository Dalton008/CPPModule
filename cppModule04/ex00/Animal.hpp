#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal &animal);
	Animal& operator=(const Animal &animal);
	virtual void makeSound() const;
	virtual std::string getType(void) const;
	virtual ~Animal(void);
};

#endif