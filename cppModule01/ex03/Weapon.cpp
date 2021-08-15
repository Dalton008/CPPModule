/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:29:14 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/13 12:04:32 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon(std::string weapon) : weaponName(weapon)
{
	return;
}

std::string const &Weapon::getType()
{
	return weaponName;
}

void Weapon::setType(std::string weapon)
{
	weaponName = weapon;
}

Weapon::~Weapon()
{}
