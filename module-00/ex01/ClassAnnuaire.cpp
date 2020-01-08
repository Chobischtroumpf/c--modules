/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:49:58 by adorigo           #+#    #+#             */
/*   Updated: 2020/01/08 15:56:37 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annuaire.hpp"

Annuaire::Annuaire(void){}

void Annuaire::ft_add_contact(Contact contact)
{
	if(i < 8)
	{
		contacts_array[i] = contact;
		i++;
	}
	else
		std::cout << "Sorry, you tried to create too many contacts";
}

Contact Annuaire::getContacts_array(int j)
{
	Contact contact;

	contact.setFirst_name(contacts_array[j].getFirst_name());
	contact.setLast_name(contacts_array[j].getLast_name());
	contact.setNickname(contacts_array[j].getNickname());
	contact.setLogin(contacts_array[j].getLogin());
	contact.setPostal_address(contacts_array[j].getPostal_address());
	contact.setEmail_address(contacts_array[j].getEmail_address());
	contact.setPhone_number(contacts_array[j].getPhone_number());
	contact.setBirthday_date(contacts_array[j].getBirthday_date());
	contact.setFavorite_meal(contacts_array[j].getFavorite_meal());
	contact.setUnderwear_color(contacts_array[j].getUnderwear_color());
	contact.setDarkest_secret(contacts_array[j].getDarkest_secret());
	return(contact);
}
