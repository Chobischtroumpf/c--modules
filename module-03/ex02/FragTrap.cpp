/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:24:09 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/03 14:42:23 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::quotes[FragTrap::nbrQuotes] = {
	"Take that!",
	"Get off my lawn!",
	"Coffee? Black... like my soul.",
	"I am Fire, I am Death!",
	"Lightening! Kukachow!"
};


FragTrap::FragTrap(std::string const &name):
	ClapTrap(name)
{
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "Votre Frag-TP Personel a été crée !" << '\n';
}

FragTrap::FragTrap(FragTrap const &other):
	ClapTrap(other.name)
{
	std::cout << this->name << ": Recompiling my combat code !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Argh arghargh death gurgle gurglegurgle urgh... dead."  << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::copy(other);
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attaque " << target 
	<< " à distance, " << "causant " << this->rangedAttackDamage 
	<< " points de dégâts !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attaque " << target
	<< " au corp a corp, " << "causant " << this->meleeAttackDamage
	<< " points de dégâts !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->energyPoints >= 25)
	{
		this->energyPoints -= 25;
		std::cout << this->name << ": "
				<< FragTrap::quotes[rand() % FragTrap::nbrQuotes] << std::endl
				<< this->name << " attacks "
				<< target << " for " << ((rand() % this->meleeAttackDamage) + 1)
				<< " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name
				<< " is out of energy!" << std::endl;
	}
}
