/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjammie <mjammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:36:40 by mjammie           #+#    #+#             */
/*   Updated: 2021/08/11 19:57:30 by mjammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombieBoris;
	Zombie *zombieGena;

	zombieBoris = NULL;
	zombieGena = NULL;
	zombieBoris = zombieBoris->newZombie("Boris");
	delete zombieBoris;
	zombieGena->randomChump("Gena");
	delete zombieGena;
}
