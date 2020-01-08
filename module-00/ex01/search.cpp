/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 08:26:01 by adorigo           #+#    #+#             */
/*   Updated: 2020/01/08 16:37:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

std::string	parse_contacts(std::string str, int i)
{
	std::string	str2 ("");
	Annuaire	annuaire;
	Contact		contact;
	int			length;

	std::cout << "before getting contact\n";
	contact = annuaire.getContacts_array(i);
	std::cout << "after getting contact\n";
	if (str.compare("first name") == 0)
	{
		str2 = contact.getFirst_name();
		std::cout << "after getting First name\n";
	}
	else if (str.compare("last name") == 0)
	{
		str2 = contact.getLast_name();
		std::cout << "after getting last name\n";
	}
	else if (str.compare("login") == 0)
	{
		str2 = contact.getLogin();
		std::cout << "after getting login\n";
	}
	std::cout << "before length\n";
	if ((str2.length()) > 10)
	{
		std::cout << str2 << "\n"; 
		str2[6] = '.';
		std::cout << str2; 
	}
	else if ((length = str2.length()) < 10)
	{
		while (length < 10)
			str2.at(length++ + 1) = ' ';
	}
	return (str);
}

int	ft_search(Annuaire annuaire)
{
	int i = 0;
	std::string first_name("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	std::string last_name("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");
	std::string	login("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0");

	std::cout << "after declaration\n";
	std::cout << "\n--------------------------------------\n";
	while (i < 8)
	{
		std::cout << "before first name parse\n";
		first_name = parse_contacts("first name", i);
		std::cout << "after first name parse\n";

		last_name = parse_contacts("last name", i);
		login = parse_contacts("login", i);
		if (first_name.compare("") && last_name.compare("") && login.compare(""))
			std::cout << "|" << i << "|" << first_name << "|" << last_name << "|" << login << "|";
		std::cout << "--------------------------------------";
		i++;
	}
	return(1);
}
