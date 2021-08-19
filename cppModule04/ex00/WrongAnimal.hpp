#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	void makeSound() const;
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal& operator=(const WrongAnimal &wrongAnimal);
	virtual std::string getType(void) const;
	virtual ~WrongAnimal(void);
};

#endif