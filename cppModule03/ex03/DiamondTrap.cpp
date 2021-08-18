/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:59:06 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 17:45:51 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
	ClapTrap::name = name;
 	this->name = name + "_clap_name";
	this->hitpoints = FragTrap(name).getHitpoints();
	this->energyPoints = ScavTrap(name).getEnergyPoints();
	this->attackDamage = FragTrap(name).getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(diamondTrap)
{
	std::cout << "DiamondTrap copy constructor called with name = " << diamondTrap.name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	ClapTrap::operator=(diamondTrap);
	return *this;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap name = " << name << std::endl;
	std::cout << "Diamond name = " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
