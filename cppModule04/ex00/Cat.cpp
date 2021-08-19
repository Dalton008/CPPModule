/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:02:38 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/18 14:05:25 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor Cat called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = cat.type;
}

Cat& Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "<Meow Meow>" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}
