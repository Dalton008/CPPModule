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

	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	bool operator>(const Fixed &f1);
	bool operator<(const Fixed &f1);
	bool operator>=(const Fixed &f1);
	bool operator<=(const Fixed &f1);
	bool operator==(const Fixed &f1);
	bool operator!=(const Fixed &f1);

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

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
	static const Fixed& min(Fixed const &f1, Fixed const &f2);
	static const Fixed& max(Fixed const &f1, Fixed const &f2);
};

std::ostream& operator<<(std::ostream &out, Fixed const &value);
Fixed& min(Fixed &f1, Fixed &f2);
Fixed& max(Fixed &f1, Fixed &f2);

#endif