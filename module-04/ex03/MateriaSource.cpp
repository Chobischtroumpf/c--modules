/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by agossuin          #+#    #+#             */
/*   Updated: 2020/05/07 08:40:04 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Contructors /////////////////////////////////////////////////////////////////

MateriaSource::MateriaSource():
	amount(0)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &source):
	amount(0)
{
	for (int i = 0; i < source.amount; i++)
		this->learnMateria(source.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;

}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
}

// Operators ///////////////////////////////////////////////////////////////////

MateriaSource& MateriaSource::operator = (const MateriaSource &source)
{
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
	this->amount = 0;
	for (int i = 0; i < source.amount; i++)
		this->learnMateria(source.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
	return *this;
}

// set-get ///////////////////////////////////////////////////////////////////////

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->amount  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i] == m)
			return ;
	this->sources[this->amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (nullptr);
}
