/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:03:54 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/28 11:54:10 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie zebra = Zombie("Animal", "zebra");
    zebra.announce();

    ZombieEvent Zevent = ZombieEvent();
    // Zevent.setZombieType("Alien");

    Zombie *xenomorph = Zevent.newZombie("XX121");
    xenomorph->announce();
    delete xenomorph;

    // Zevent.setZombieType("Pokemon");
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    Zevent.randomChump();
    return (0);
}
