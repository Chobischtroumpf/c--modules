/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 08:26:01 by adorigo           #+#    #+#             */
/*   Updated: 2020/01/09 15:56:12 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"
#include "contact.hpp"

static std::string	adding_spaces(int length, std::string str)
{
	std::string	spaces (" ");

	while (length < 10)
	{
		str += spaces;
		length++;
	}
	return(str);
}

static std::string	parse_contacts(std::string str, int i, Annuaire annuaire)
{
	std::string	str2;
	std::string tempstr;
	Contact		contact;
	int			length;

	contact = annuaire.getContacts_array(i);
	if (str.compare("first name") == 0)
		str2 = contact.getFirst_name();
	else if (str.compare("last name") == 0)
		str2 = contact.getLast_name();
	else if (str.compare("login") == 0)
		str2 = contact.getLogin();
	if (str2.length() > 10)
	{
		tempstr = str2;
		str2 = tempstr.substr(0, 9);
		str2 += ".\0";
	}
	else if ((length = str2.length()) < 10 && str.length() > 1)
	{
		str2 = adding_spaces(length, str2);
	}
	return (str2);
}

int	ft_search(Annuaire annuaire)
{
	int i = 0;
	std::string first_name;
	std::string last_name;
	std::string	login;
	std::string index;

	std::cout << "\n--------------------------------------------\n";
	std::cout << "|index     |first name|last name |login     |\n";
	std::cout << "---------------------------------------------\n";
	while (i < 8)
	{

		first_name = parse_contacts("first name", i, annuaire);
		last_name = parse_contacts("last name", i, annuaire);
		login = parse_contacts("login", i, annuaire);

		if (first_name.compare("          ") && last_name.compare("          ") && login.compare("          "))
		{
			
			index = adding_spaces(1, std::to_string(i));
			std::cout << "|" << index << "|" << first_name << "|" << last_name << "|" << login << "|\n";
			std::cout << "---------------------------------------------\n";
		}
		i++;
	}
	return(1);
}
