/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:51:07 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 01:01:42 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

using std::cout;
using std::string;

class Sorcerer
{

private:
	std::string name;
	std::string title;

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &other);
	virtual ~Sorcerer();

	std::string const &getName(void) const;
	std::string const &getTitle(void) const;
	void Sorcerer::polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
