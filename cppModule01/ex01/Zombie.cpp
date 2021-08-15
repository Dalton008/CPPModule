/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:02:04 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/12 13:43:54 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name)
{
	this->zombieName = name;
	announce();
}

void Zombie::announce()
{
	std::cout << "Zombie " << this->zombieName << " : Braiiinzzzzz.." << std::endl;
}

std::string Zombie::getName()
{
	return zombieName;
}

void Zombie::setName(std::string name)
{
	zombieName = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << getName() << " destroyed" << std::endl;
}
