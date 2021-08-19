/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:12:25 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 17:38:32 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Constructor Dog called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

Dog& Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return *this;
	this->type = dog.type;
	if (dog.brain)
	{
		this->brain = new Brain();
		brain->setIdeas(dog.brain->getIdeas());
	}
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "<Woof Woof>" << std::endl;
}

std::string Dog::getType(void) const
{
	return type;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->brain;
}
