/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 16:49:58 by adorigo           #+#    #+#             */
/*   Updated: 2020/01/07 13:26:48 by adorigo          ###   ########.fr       */
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
	contacts_array[j].getFirst_name;
}

