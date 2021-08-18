/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:49:37 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/16 17:16:08 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("NewName");
	ClapTrap clapTrap1(clapTrap);

	clapTrap.attack("Gena");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
}
