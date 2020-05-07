/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 08:47:54 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character: public ICharacter
{

	private:
		Character();

		std::string		name;
		int equipped;
		AMateria *inventory[4];
	public:
		// Constructors
		Character (std::string const &name);
		Character (const Character &source);
		virtual ~Character ();

		// Operators
		Character &operator=(const Character &source);

		// Utils
		std::string const &getName() const;
		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

# endif
