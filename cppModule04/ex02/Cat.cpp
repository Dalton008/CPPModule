/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:02:38 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/19 13:06:57 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor Cat called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat& Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	this->type = cat.type;
	if (cat.brain)
	{
		this->brain = new Brain();
		brain->setIdeas(cat.brain->getIdeas());
	}
	return *this;
}

std::string Cat::getType(void) const
{
	return type;
}

void Cat::makeSound(void) const
{
	std::cout << "<Meow Meow>" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->brain;
}
