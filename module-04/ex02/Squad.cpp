/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 13:09:14 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/06 09:17:38 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

// Contructors /////////////////////////////////////////////////////////////////

Squad::Squad():
	count(0), units(nullptr)
{
}

Squad::Squad(const Squad &source):
	count(0), units(nullptr)
{
	this->count = 0;
	for (int i = 0; i < source.getCount(); i++)
		this->push(source.getUnit(i)->clone());
}

Squad::~Squad()
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

// Operators ///////////////////////////////////////////////////////////////////

Squad& Squad::operator=(Squad const &source)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = nullptr;
	}
	this->count = 0;
	for (int i = 0; i < source.getCount(); i++)
		this->push(source.getUnit(i)->clone());
	return (*this);
}

// Utils ///////////////////////////////////////////////////////////////////////

int Squad::getCount(void) const
{
	return (this->count);
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (this->count == 0 || index < 0 || index >= count)
		return (nullptr);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			if (this->units[i] == unit)
				return (this->count);
		ISpaceMarine **cpy = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			cpy[i] = this->units[i];
		delete[] this->units;
		this->units = cpy;
		this->units[this->count] = unit;
		this->count++;
	}
	else
	{
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}
