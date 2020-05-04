/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:51:07 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/04 11:15:16 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	jim.getPolymorphed();
	robert.polymorph(joe);
	joe.getPolymorphed();
	robert.polymorph(static_cast<Victim>(joe));

	std::cout << "---" << std::endl;

	Sorcerer blank(robert);

	Victim franck(jim);
	Peon jean(joe);

	std::cout << blank << franck << jean;

	franck = jim;
	blank.polymorph(franck);
	franck.getPolymorphed();
	blank = robert;
	jean = joe;
	blank.polymorph(jean);
	jean.getPolymorphed();

	std::cout << "---" << std::endl;

	return (0);
}