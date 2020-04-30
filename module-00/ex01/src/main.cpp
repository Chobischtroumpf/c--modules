/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 08:54:46 by alessandro        #+#    #+#             */
/*   Updated: 2020/04/27 17:45:29 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClassAnnuaire.hpp"

int
	main(void)
{
	Annuaire annuaire;
	bool run;
	std::string command;

	annuaire.show_startup();
	run = true;
	while (run)
	{
		std::cout << ">";
		std::getline(std::cin, command);
		if (command == "ADD")
			annuaire.add_contact();
		else if (command == "SEARCH")
			annuaire.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			run = false;
		}
		else
		{
			std::cout << "wrong command sorry" << std::endl;
		}
	}
	return (0);
}
