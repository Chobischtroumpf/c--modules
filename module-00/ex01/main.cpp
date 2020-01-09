/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 08:54:46 by alessandro        #+#    #+#             */
/*   Updated: 2020/01/09 16:09:47 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"
#include "contact.hpp"

static void		ft_showing_contact(Annuaire annuaire)
{
	Contact contact;
	std::string i;

	std::cout << "\n select contact please (by index) : \n--> ";
	std::cin >> i;
	contact = annuaire.getContacts_array(std::stoi(i));
	std::cout	<< "First name :		" << contact.getFirst_name() << std::endl << "Last name :		" 
				<< contact.getLast_name() << std::endl << "Nickname :		" << contact.getNickname() 
				<< std::endl << "Login :			" << contact.getLogin() << std::endl << "Postal code :		" 
				<< contact.getPostal_address() << std::endl << "Email address :		" << contact.getEmail_address() 
				<< std::endl << "Phone number :		" << contact.getPhone_number() << std::endl
				<< "Birthday date :		" << contact.getBirthday_date() << std::endl << "Favorite meal:		" 
				<< contact.getFavorite_meal() << std::endl << "Underwear color :	" << contact.getUnderwear_color()
				<< std::endl << "Darkest secret :	" << contact.getDarkest_secret() << std::endl;
}

static Contact ft_create_contact()
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

	std::cout << "quel est le prenom de votre contact ?\n-->  ";
	std::cin >> first_name;
	std::cout << "quel est le nom de famille de votre contact ?\n-->  ";
	std::cin >> last_name;
	std::cout << "quel est le surnom de votre contact ?\n-->  ";
	std::cin >> nickname;
	std::cout << "quel est le login de votre contact ?\n-->  ";
	std::cin >> login;
	std::cout << "quel est l'addresse postale de votre contact ?\n-->  ";
	std::cin >> postal_address;
	std::cout << "quel est l'addresse email de votre contact ?\n-->  ";
	std::cin >> email_address;
	std::cout << "quel est le numero de telephone de votre contact ?\n-->  ";
	std::cin >> phone_number;
	std::cout << "quel est la date d'anniversaire de votre contact ?\n-->  ";
	std::cin >> birthday_date;
	std::cout << "quel est le plat favorit de votre contact ?\n-->  ";
	std::cin >> favorite_meal;
	std::cout << "quel est la couleur des sous-vetements de votre contact ?\n-->  ";
	std::cin >> underwear_color;
	std::cout << "quel est le secret le plus obscur de votre contact (en un mot) ?\n-->  ";
	std::cin >> darkest_secret;

	contact.set_values(first_name, last_name, nickname, login, postal_address,
						email_address, phone_number, birthday_date,
						favorite_meal, underwear_color, darkest_secret);
	return(contact);
}

int main(void)
{
	std::string str ("");
	Contact contact;
	Annuaire annuaire;

	while (str.compare("EXIT") != 0)
	{
		str = "";
		std::cout << "what do you want to do ?\n-->  ";
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			contact = ft_create_contact();
			annuaire.ft_add_contact(contact);
		}
		else if (str.compare("SEARCH") == 0)
		{
			ft_search(annuaire);
			ft_showing_contact(annuaire);
		}
	}
}
