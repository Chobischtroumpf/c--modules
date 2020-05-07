/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 08:47:45 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"


class Cure: public AMateria
{

	private:
		std::string		name;

	public:
		// Constructors
		Cure ();
		Cure (const Cure &source);
		virtual ~Cure ();

		// Operators
		Cure &operator=(const Cure &source);

		// Utils
		AMateria *clone(void) const;
		void use(ICharacter &target);
};

# endif
