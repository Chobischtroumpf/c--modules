/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

// Contructors /////////////////////////////////////////////////////////////////

TacticalMarine::TacticalMarine()
{
	std::cout << "Default constructor for TacticalMarine called" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &source)
{
	std::cout << "Copy constructor for TacticalMarine called" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Destructor for TacticalMarine called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

TacticalMarine& TacticalMarine::operator = (TacticalMarine const &source)
{
	std::cout << "Assignations operator for TacticalMarine called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		TacticalMarine::setName(std::string name) //generic function
{
	name = name;
}

std::string	TacticalMarine::getName() //generic function
{
	return name;
}


std::ostream &operator<<(std::ostream &out, TacticalMarine const &TacticalMarine)
{
	out << TacticalMarine.getName()
	return (out);
}
