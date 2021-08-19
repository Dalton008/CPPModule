#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat &cat);
	Cat& operator=(const Cat &cat);
	virtual void makeSound() const;
	~Cat(void);
};

#endif