/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 08:26:01 by adorigo           #+#    #+#             */
/*   Updated: 2020/01/07 16:20:47 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

std::string	parse_contacts(std::string str, int i)
{
	std::string str ("");
	Annuaire annuaire;
	Contact contact;

	contact = annuaire.getContacts_array(i);
	if (str.compare("first name") == 0)
	{
		str = contact.getFirst_name();
		if (str.length() > 10)
		{
			str.at(10) = '.';
			str.at(11) = '\0';
		}
		else if (str.length() < 10)
	}
	else if (str.compare("last name") == 0)
		str = contact.getLast_name();
	else if (str.compare("login") == 0)
		str = contact.getLogin();
}

int	ft_search(Annuaire annuaire)
{
	int i = 0;
	std::string line ("");
	std::string first_name("");
	std::string last_name("");
	std::string	login("");

	std::cout << "-------------------------------------------------------------------";
	while (i < 8)
	{
		first_name = parse_contacts("first name", i);
		last_name = parse_contacts("last name", i);
		login = parse_contacts("login", i);
		if (first_name.compare("") && last_name.compare("") && login.compare(""))
			cout << "|" << first_name << "|" << last_name << "|" << login << "|"


	}
}
