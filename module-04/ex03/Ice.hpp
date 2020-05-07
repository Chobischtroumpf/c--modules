/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 08:47:32 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"


class Ice: public AMateria
{
	public:
		// Constructors
		Ice ();
		Ice (const Ice &source);
		virtual ~Ice ();

		// Operators
		Ice &operator=(const Ice &source);

		// Utils
		AMateria *clone(void) const;
		void use(ICharacter &target);

};

# endif
