#ifndef WRONGCAT_H
#define WRONGCAT_H

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat &wrongCat);
	WrongCat& operator=(const WrongCat &cat);
	virtual void makeSound() const;
	~WrongCat(void);
};

#endif