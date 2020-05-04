/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 12:40:25 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Character::Character()
{
	std::cout << "Default constructor for Character called" << std::endl;
}

Character::Character(const Character &source)
{
	std::cout << "Copy constructor for Character called" << std::endl;
}

Character::~Character()
{
	std::cout << "Destructor for Character called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

Character& Character::operator = (const Character &source)
{
	std::cout << "Assignations operator for Character called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		Character::setName(std::string name) //generic function
{
	name = name;
}

std::string	Character::getName() //generic function
{
	return name;
}
