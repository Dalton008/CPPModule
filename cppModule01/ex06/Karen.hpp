#ifndef KAREN_H
# define KAREN_H

#include <iostream>
#include <string>

class Karen
{	
private:
	typedef void (*functionArray)();

public:

	Karen(void);

	void debug(void);

	void info(void);

	void warning(void);

	void error(void);

	void complain(std::string level);

};

#endif