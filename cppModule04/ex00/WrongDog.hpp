#ifndef WRONGDOG_H
#define WRONGDOG_H

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal 
{
public:
	WrongDog(void);
	WrongDog(const WrongDog &wrongDog);
	WrongDog& operator=(const WrongDog &wrongDog);
	virtual void makeSound() const;
	~WrongDog(void);
};

#endif