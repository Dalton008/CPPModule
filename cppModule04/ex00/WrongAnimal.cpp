/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:57:08 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 14:08:42 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
	type = "animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = wrongAnimal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	this->type = wrongAnimal.type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Who am i (Wrong animal)?" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}
