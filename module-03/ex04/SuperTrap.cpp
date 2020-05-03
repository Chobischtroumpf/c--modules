/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:11:18 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/03 16:28:46 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name):
	ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << this->name << ": SUPER CREATING." << std::endl;
	this->hitPoints = this->FragTrap::hitPoints;
	this->maxHitPoints = this->FragTrap::maxHitPoints;
	this->energyPoints = this->NinjaTrap::energyPoints;
	this->maxEnergyPoints = this->NinjaTrap::maxEnergyPoints;
	this->meleeAttackDamage = this->NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = this->FragTrap::rangedAttackDamage;
	this->armorDamageReduction = this->FragTrap::armorDamageReduction;
}

SuperTrap::SuperTrap(SuperTrap const &other):
	ClapTrap(other.name), NinjaTrap(name) , FragTrap(name)
{
	std::cout << this->name << ": SUPER CLAPTRAP IN THE MAKING." << std::endl;
	ClapTrap::copy(other);
	std::cout << this->name << ": HELLO ! MY NAME IS " << this->name << ", I AM HERE TO ASSIST YOU !" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << ": NOOOOOOOOOOOO, I AM DYIIIIING........." << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other)
{
	ClapTrap::copy(other);
	return(*this);
}
void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}