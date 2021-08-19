/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:57:08 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 14:05:16 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Constructor Animal called" << std::endl;
	type = "animal";
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = animal.type;
}

Animal& Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return *this;
}

void Animal::makeSound(void) const
{
	std::cout << "Who am i?" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}
