/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:51:07 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 11:21:01 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
private:
	Sorcerer();

	std::string name;
	std::string title;
public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(const Sorcerer& other);
	virtual ~Sorcerer();

	Sorcerer &operator=(const Sorcerer& other);

	std::string const &getName(void) const;
	std::string const &getTitle(void) const;

	void polymorph(Victim const &victim) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif
