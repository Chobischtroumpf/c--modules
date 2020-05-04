/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:48:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 12:42:15 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Enemy::Enemy()
{
	std::cout << "Default constructor for Enemy called" << std::endl;
}

Enemy::Enemy(const Enemy &source)
{
	std::cout << "Copy constructor for Enemy called" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Destructor for Enemy called" << std::endl;
}

// Operators ///////////////////////////////////////////////////////////////////

Enemy& Enemy::operator = (const Enemy &source)
{
	std::cout << "Assignations operator for Enemy called" << std::endl;
	return *this;
}

// Utils ///////////////////////////////////////////////////////////////////////

void		Enemy::setName(std::string name) //generic function
{
	name = name;
}

std::string	Enemy::getName() //generic function
{
	return name;
}
