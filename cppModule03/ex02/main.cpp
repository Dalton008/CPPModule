/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:49:37 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 15:19:02 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Boris");
	ClapTrap clapTrap1(clapTrap);

	clapTrap.attack("Alex");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);

	ScavTrap scavTrap("Gena");
	scavTrap.attack("Alex");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(10);
	scavTrap.guardGate();

	FragTrap fragTrap("Maksim");
	fragTrap.attack("Alex");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(20);
	fragTrap.highFivesGuys();
}
