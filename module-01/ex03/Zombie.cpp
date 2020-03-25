/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 15:03:58 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/24 16:22:30 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout <<  "< " << this->name;
	std::cout << " (" << this->type << ")";
	std::cout << " > Braiiiiiiiiiinnnnnnnnnssss..." << std::endl;
}
