/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:24:09 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 00:52:42 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::string FragTrap::quotes[FragTrap::nbrQuotes] = {
	"Take that!",
	"Get off my lawn!",
	"Coffee? Black... like my soul.",
	"I am Fire, I am Death!",
	"Lightening! Kukachow!"};

FragTrap::FragTrap(std::string const &name) : name(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->maxHitPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "Votre Frag-TP Personel a été crée !" << '\n';
}

FragTrap::FragTrap(FragTrap const &other) : name(other.name)
{
	std::cout << this->name << ": Recompiling my combat code !" << std::endl;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": Argh arghargh death gurgle gurglegurgle urgh... dead." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	this->name = other.name;
	this->level = other.level;
	this->hitPoints = other.hitPoints;
	this->maxHitPoints = other.maxHitPoints;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	return (*this);
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attaque " << target
			  << " à distance, "
			  << "causant " << this->rangedAttackDamage
			  << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->name << " attaque " << target
			  << " au corp a corp, "
			  << "causant " << this->meleeAttackDamage
			  << " points de dégâts !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = amount - this->armorDamageReduction;
	if (amount < 0)
		amount = 0;
	this->hitPoints -= amount;
	if (this->hitPoints < 0)
	{
		this->hitPoints = 0;
		std::cout << "votre FR4G-TP n'a plus de vie" << std::endl;
	}
	else if (this->hitPoints < 30)
		std::cout << "votre FR4G-TP n'a presque plus de vie" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	if (this->hitPoints > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	std::cout << "YOUR " << this->name << " WAS HEALED, YOU HEARD THAT ? I. WAS. HEALED." << std::endl;
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
