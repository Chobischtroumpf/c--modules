/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:33:28 by agossuin          #+#    #+#             */
/*   Updated: 2020/05/03 15:11:45 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>

class FragTrap
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

		static const int nbrQuotes = 5;
		static std::string quotes[FragTrap::nbrQuotes];

	public:
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		~FragTrap();

	FragTrap &operator=(FragTrap const &other);

		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const &target);

};

# endif
