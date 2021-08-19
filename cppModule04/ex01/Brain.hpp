#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain(void);
	Brain(const Brain &brain);
	Brain& operator=(const Brain &brain);
	std::string *getIdeas(void);
	void setIdeas(std::string *idea);
	~Brain();
};

#endif