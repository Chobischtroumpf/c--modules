/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessandro <alessandro@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:23:39 by alessandro        #+#    #+#             */
/*   Updated: 2019/12/24 17:03:24 by alessandro       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H
#include <cctype>
#include <iostream>
#include <array>
#include <string.h>

class Contact
{
	private:
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

	public:
		Contact();
		void set_values(std::string first_name,
						std::string last_name,
						std::string nickname,
						std::string login,
						std::string postal_address,
						std::string email_address,
						std::string phone_number,
						std::string birthday_date,
						std::string favorite_meal,
						std::string underwear_color,
						std::string darkest_secret);
};

#endif
/* first name ,last name ,nickname ,login ,postal address ,email address ,phone number ,birthday date ,favorite meal ,underwear color et darkest secret */