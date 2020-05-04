/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 12:39:19 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// Contructors /////////////////////////////////////////////////////////////////

PowerFist::PowerFist()
{
	std::cout << "Default constructor for PowerFist called" << std::endl;
}

PowerFist::PowerFist(const PowerFist &source)
{
	std::cout << "Copy constructor for PowerFist called" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "Destructor for PowerFist called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

PowerFist& PowerFist::operator = (const PowerFist &source)
{
	std::cout << "Assignations operator for PowerFist called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		PowerFist::setName(std::string name) //generic function
{
	name = name;
}

std::string	PowerFist::getName() //generic function
{
	return name;
}
