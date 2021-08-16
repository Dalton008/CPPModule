#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{

private:

	int					num;
	static const int	bits = 8;
public:

	Fixed& operator=(const Fixed &fixed);
	Fixed(void);
	Fixed(const Fixed &fixed);
	~Fixed (void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif