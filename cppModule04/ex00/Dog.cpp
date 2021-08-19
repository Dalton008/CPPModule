/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:12:25 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:38:41 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Constructor Dog called" << std::endl;
	this->type = "Dog";	
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = dog.type;
}

Dog& Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "<Woof Woof>" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}
