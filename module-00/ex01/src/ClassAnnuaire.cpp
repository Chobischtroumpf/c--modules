/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:49:58 by adorigo           #+#    #+#             */
/*   Updated: 2020/01/09 16:31:20 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/annuaire.hpp"

Annuaire::Annuaire(void){}

void Annuaire::ft_add_contact(Contact contact)
{
	if(incrementer < 8)
	{
		contacts_array[incrementer] = contact;
		incrementer++;
	}
	else
		std::cout << "Sorry, you tried to create too many contacts";
}

Contact Annuaire::getContacts_array(int i)
{
	Contact contact;

	contact.setFirst_name(contacts_array[i].getFirst_name());
	contact.setLast_name(contacts_array[i].getLast_name());
	contact.setNickname(contacts_array[i].getNickname());
	contact.setLogin(contacts_array[i].getLogin());
	contact.setPostal_address(contacts_array[i].getPostal_address());
	contact.setEmail_address(contacts_array[i].getEmail_address());
	contact.setPhone_number(contacts_array[i].getPhone_number());
	contact.setBirthday_date(contacts_array[i].getBirthday_date());
	contact.setFavorite_meal(contacts_array[i].getFavorite_meal());
	contact.setUnderwear_color(contacts_array[i].getUnderwear_color());
	contact.setDarkest_secret(contacts_array[i].getDarkest_secret());
	return(contact);
}
