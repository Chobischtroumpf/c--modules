/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 13:09:14 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"

// Contructors /////////////////////////////////////////////////////////////////

ISpaceMarine::ISpaceMarine()
{
	std::cout << "Default constructor for ISpaceMarine called" << std::endl;
}

ISpaceMarine::ISpaceMarine(const ISpaceMarine &source)
{
	std::cout << "Copy constructor for ISpaceMarine called" << std::endl;
}

ISpaceMarine::~ISpaceMarine()
{
	std::cout << "Destructor for ISpaceMarine called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

ISpaceMarine& ISpaceMarine::operator = (ISpaceMarine const &source)
{
	std::cout << "Assignations operator for ISpaceMarine called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		ISpaceMarine::setName(std::string name) //generic function
{
	name = name;
}

std::string	ISpaceMarine::getName() //generic function
{
	return name;
}


std::ostream &operator<<(std::ostream &out, ISpaceMarine const &ISpaceMarine)
{
	out << ISpaceMarine.getName()
	return (out);
}
