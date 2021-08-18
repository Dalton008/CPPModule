/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:43:07 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 14:24:59 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called with name = " << name << std::endl;
	hitpoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FragTrap copy constructor called with name = " << fragTrap.name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " HIGH FIVE" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
