/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:18:20 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/16 16:33:50 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	num = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	num = fixed.getRawBits();
}

Fixed::Fixed(int value)
{
	// std::cout << "Int constructor called" << std::endl;
	num = value << bits;
}

Fixed::Fixed(float value)
{
	// std::cout << "Float constructor called" << std::endl;
	num = roundf(value * (1 << bits));
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Assignation operator called" << std::endl;
	num = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &out, Fixed const &value)
{
	return out << value.toFloat(); 
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return num + fixed.num;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return num - fixed.num;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return Fixed(toFloat() / fixed.toFloat());
}

bool Fixed::operator>(const Fixed &fixed)
{
	if (num > fixed.num)
		return 1;
	return 0;
}

bool Fixed::operator<(const Fixed &fixed)
{
	if (num < fixed.num)
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed &fixed)
{
	if (num >= fixed.num)
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed &fixed)
{
	if (num <= fixed.num)
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed &fixed)
{
	if (num == fixed.num)
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed &fixed)
{
	if (num != fixed.num)
		return 1;
	return 0;
}

Fixed& Fixed::operator++()
{
	if (num == 8)
		num = 0;
	else 
		++num;
	return *this;
}

Fixed& Fixed::operator--()
{
	if (num == 0)
		num = 8;
	else
		--num;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

const Fixed& Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.num < f2.num)
		return f1;
	return f2;
}

const Fixed& Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.num > f2.num)
		return f1;
	return f2;
}

float Fixed::toFloat( void ) const
{
	return (float)num / (float)(1 << bits);
}

int Fixed::toInt(void) const
{
	return num >> bits;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return num;
}

void Fixed::setRawBits(int const raw)
{
	num = raw;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}
