/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandro <alessandro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 08:54:46 by alessandro        #+#    #+#             */
/*   Updated: 2019/12/24 17:03:05 by alessandro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.h"
#include "contact.h"

void ft_create_contact()
{
	Contact contact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	std::cout << "quel est le prenom de votre contact ?";
	std::cin >> first_name;
	std::cout << "quel est le nom de famille de votre contact ?";
	std::cin >> last_name;
	std::cout << "quel est le surnom de votre contact ?";
	std::cin >> nickname;
	std::cout << "quel est le login de votre contact ?";
	std::cin >> login;
	std::cout << "quel est l'addresse postale de votre contact ?";
	std::cin >> postal_address;
	std::cout << "quel est l'addresse email de votre contact ?";
	std::cin >> email_address;
	std::cout << "quel est le numero de telephone de votre contact ?";
	std::cin >> phone_number;
	std::cout << "quel est la date d'anniversaire de votre contact ?";
	std::cin >> birthday_date;
	std::cout << "quel est le plat favorit de votre contact ?";
	std::cin >> favorite_meal;
	std::cout << "quel est la couleur des sous-vetements de votre contact ?";
	std::cin >> underwear_color;
	std::cout << "quel est le secret le plus obscur de votre contact ?";
	std::cin >> darkest_secret;

	contact.set_values(first_name, last_name, nickname, login, postal_address,
						email_address, phone_number, birthday_date,
						favorite_meal, underwear_color, darkest_secret);
}

int main(void)
{
	std::string str ("");

	while (str.compare("EXIT") != 0)
	{
		std::cout << "what do you want to do ?\n->";
		std::cin >> str;
		if (str.compare("ADD") == 0)
			ft_create_contact();
		else if (str.compare("SEARCH"))
		{
			return (0);
		}
	}
}