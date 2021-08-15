#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string zombieName;

public:

	Zombie(void);

	Zombie(std::string name);

	void announce(void);

	std::string getName();

	void setName(std::string);

	~Zombie (void);
};

Zombie* zombieHorde(int N, std::string name);

#endif