/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 12:42:10 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

// Contructors /////////////////////////////////////////////////////////////////

RadScorpion::RadScorpion()
{
	std::cout << "Default constructor for RadScorpion called" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &source)
{
	std::cout << "Copy constructor for RadScorpion called" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "Destructor for RadScorpion called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

RadScorpion& RadScorpion::operator = (const RadScorpion &source)
{
	std::cout << "Assignations operator for RadScorpion called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		RadScorpion::setName(std::string name) //generic function
{
	name = name;
}

std::string	RadScorpion::getName() //generic function
{
	return name;
}
