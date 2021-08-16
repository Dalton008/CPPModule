#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{

private:

	int					num;
	static const int	bits = 8;
public:

	Fixed& operator=(const Fixed &fixed);
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed(int value);
	Fixed(float value);
	~Fixed (void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &out, Fixed const &value);

#endif