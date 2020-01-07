/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:06:40 by alessandro        #+#    #+#             */
/*   Updated: 2020/01/07 11:31:36 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_H
#define ANNUAIRE_H

#include "contact.hpp"

class Annuaire
{
private:
	std::array<Contact, 8> contacts_array;
	int i;

public:
	Annuaire();
	void 		ft_add_contact(Contact contact);
	std::string	ft_get_name(std::string line);
	Contact getContacts_array(int i);
};

#endif