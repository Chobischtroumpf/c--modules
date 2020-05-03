/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:24:09 by adorigo          #+#    #+#             */
/*   Updated: 2020/05/02 21:24:09 by adorigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>

class ScavTrap
{

	private:
		int			hitPoints;
		int			maxHitPoints;
		int			energyPoints;
		int			maxEnergyPoints;
		int			level;
		int			meleeAttackDamage;
		int			rangedAttackDamage;
		int			armorDamageReduction;
		std::string	name;

		static const int nbrChalls = 5;
		static std::string challenges[ScavTrap::nbrChalls];

	public:
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();

		ScavTrap &operator=(ScavTrap const &other);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void 	challengeNewcomer(void);
};

# endif