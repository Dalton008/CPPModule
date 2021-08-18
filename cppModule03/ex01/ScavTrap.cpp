/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:53:17 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 14:22:48 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called with name = " << name << std::endl;
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) 
{
	std::cout << "ScavTrap copy constructor called with name = " << scavTrap.name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return *this;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
