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

	Zombie* newZombie(std::string name);

	void randomChump(std::string name);

	void announce(void);

	std::string getName(void);

	~Zombie (void);
};

#endif