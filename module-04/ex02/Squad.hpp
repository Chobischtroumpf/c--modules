/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 17:45:18 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAP_HPP
# define SQUAP_HPP
# include "ISquad.hpp"

class Squad: public ISquad
{

	private:
		int count;
		ISpaceMarine **units;

public:
	// Constructors
	Squad ();
	Squad (const Squad &source);
	virtual ~Squad ();

	// Operators
	Squad &operator = (const Squad &source);

	// Utils
	int getCount(void) const;
	ISpaceMarine *getUnit(int index) const;
	int push(ISpaceMarine *unit);
};

# endif
