/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/06 08:58:01 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

// Contructors /////////////////////////////////////////////////////////////////

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &source)
{
	(void)source;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout <<  "I’ll be back ..." << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &source)
{
	(void)source;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

ISpaceMarine *AssaultTerminator::clone(void) const
{
	AssaultTerminator *cpy = new AssaultTerminator(*this);
	return (cpy);
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "this code is unclean. PURIFY IT" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}