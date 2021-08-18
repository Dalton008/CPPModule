/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:49:37 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 14:18:14 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// ClapTrap clapTrap("Boris");
	// ClapTrap clapTrap1(clapTrap);

	// clapTrap.attack("Alex");
	// clapTrap.takeDamage(5);
	// clapTrap.beRepaired(5);

	ScavTrap scavTrap("Gena");
	ScavTrap scavTrap1("Genal");

	// scavTrap.attack("Alex");
	// scavTrap.takeDamage(10);
	// scavTrap.beRepaired(10);
	// scavTrap.guardGate();
	ScavTrap& a = scavTrap;
	ScavTrap& b = scavTrap1;
	ScavTrap c = b;
	c = scavTrap;

	a.attack("Alex");
	c.attack("GG");
}
