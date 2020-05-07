/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/06 09:16:58 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

// Contructors /////////////////////////////////////////////////////////////////

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &source)
{
	(void)source;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

TacticalMarine& TacticalMarine::operator = (TacticalMarine const &source)
{
	(void)source;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////


ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *cpy = new TacticalMarine(*this);
	return (cpy);
}
void TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack(void) const
{
	std::cout << "*attacks with chainsword *" << std::endl;
}
