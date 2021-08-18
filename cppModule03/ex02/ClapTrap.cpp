/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:56:39 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 14:54:02 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called whit name = " << name << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called with name = " << clapTrap.name << std::endl;
	name = clapTrap.name;
	hitpoints = clapTrap.hitpoints;
	energyPoints = clapTrap.energyPoints;
	attackDamage = clapTrap.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
	name = clapTrap.name;
	hitpoints = clapTrap.hitpoints;
	energyPoints = clapTrap.energyPoints;
	attackDamage = clapTrap.attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << name << " attack " << target << ", causing " 
		<< attackDamage << " points of damage!" << std::endl;
	energyPoints -=5;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name << " take damage " << amount << std::endl;
	hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << name << " be repaired " << amount << std::endl;
	hitpoints += amount;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
