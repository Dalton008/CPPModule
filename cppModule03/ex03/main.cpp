/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:49:37 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/17 17:36:13 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap("Dimon");
	std::cout << "Hitpoints = " << diamondTrap.getHitpoints() << std::endl;
	std::cout << "Energy points = " << diamondTrap.getEnergyPoints() << std::endl;
	std::cout << "Attack damage = " << diamondTrap.getAttackDamage() << std::endl;
	diamondTrap.attack("Alex");
	diamondTrap.takeDamage(30);
	diamondTrap.beRepaired(30);
	diamondTrap.whoAmI();
}
