/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:51:07 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 10:50:59 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Victim
{
protected:
	std::string name;
public:
	Victim(std::string const &name);
	Victim(Victim const &other);
	virtual ~Victim();
	
	Victim &operator=(const Victim &other);

	std::string const &Victim::getName(void) const;
	void getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &out, Victim const &sorcerer);

#endif
