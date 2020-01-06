/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:23:39 by alessandro        #+#    #+#             */
/*   Updated: 2020/01/06 16:37:29 by adorigo          ###   ########.fr       */
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
