/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:04:11 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/24 15:11:44 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <sys/time.h>

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return(new Zombie( name, this->type));
}

void ZombieEvent::randomChump(void)
{    
    const std::string names[] = {
        "Pidgey", "Squirtle", "Charizard", "Caterpie", "Eevee",
        "Misdreavus", "Finneon", "Magikarp", "Chewtle", "Throh",
        "Piplup", "Elekid", "Gigalith", "Snom", "Oranguru",
        "Hriyama", "Xatu", "Arcanine", "Stufful", "Raboot"
    };
    struct timeval tval;
    gettimeofday(&tval, NULL);
    Zombie zombie(names[tval.tv_usec % 20], this->type);
    zombie.announce();
}