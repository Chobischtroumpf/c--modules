/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/06 09:00:39 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		// Constructors
		TacticalMarine ();
		TacticalMarine (const TacticalMarine &source);
		virtual ~TacticalMarine ();

		// Operators
		TacticalMarine &operator = (const TacticalMarine &source);

		// Utils
		ISpaceMarine *clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;

};

# endif
