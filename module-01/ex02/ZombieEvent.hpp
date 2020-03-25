/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:04:12 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/24 16:11:46 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type;
public:
    ZombieEvent();
    virtual ~ZombieEvent();

    void    setZombieType(std::string const type);
    Zombie  *newZombie(std::string name);
    void  randomChump(void);
};

#endif