#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *brain;
public:
	Cat(void);
	Cat(const Cat &cat);
	Cat& operator=(const Cat &cat);
	virtual void makeSound() const;
	std::string getType(void) const;
	~Cat(void);
};

#endif