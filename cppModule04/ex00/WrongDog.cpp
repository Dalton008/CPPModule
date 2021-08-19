/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:07:58 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 14:09:06 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
	std::cout << "Constructor WrongDog called" << std::endl;
	this->type = "WrongDog";	
}

WrongDog::WrongDog(const WrongDog &wrongDog)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	this->type = wrongDog.type;
}

WrongDog& WrongDog::operator=(const WrongDog &wrongDog)
{
	this->type = wrongDog.type;
	return *this;
}

void WrongDog::makeSound(void) const
{
	std::cout << "<Woof Woof (Wrong Dog)" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "Destructor WrongDog called" << std::endl;
}
