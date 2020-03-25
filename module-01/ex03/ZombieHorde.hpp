/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 16:06:52 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/24 16:24:16 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include "Zombie.hpp"
# include <sys/time.h>

class ZombieHorde
{
private:
    int         n;
    Zombie      *zombies;    
public:
    ZombieHorde(int size);
    virtual ~ZombieHorde();

    Zombie get_random_zombie(std::string type);
    void announce(void);
};

#endif