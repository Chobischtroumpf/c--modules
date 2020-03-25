/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 15:14:12 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/25 11:15:01 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie ZombieHorde::get_random_zombie(std::string type)
{
    const std::string names[] = {
        "Pidgey", "Squirtle", "Charizard", "Caterpie", "Eevee",
        "Misdreavus", "Finneon", "Magikarp", "Chewtle", "Throh",
        "Piplup", "Elekid", "Gigalith", "Snom", "Oranguru",
        "Hriyama", "Xatu", "Arcanine", "Stufful", "Raboot"
    };
    struct timeval tval;
    gettimeofday(&tval, NULL);
    return(Zombie(names[tval.tv_usec % 20], type));
}

ZombieHorde::ZombieHorde(int size)
{
    this->n = size;
    this->zombies = new Zombie[size];
    
    for (int i = 0; i < size; i++)
        zombies[i] = get_random_zombie("Horde Zombie");
}

ZombieHorde::~ZombieHorde()
{
    delete[] this->zombies;
    std::cout << "All the zombies were automatically deleted" << std::endl;
}

void    ZombieHorde::announce()
{
    for (int i = 0; i < this->n;  i++)
        zombies[i].announce();
}