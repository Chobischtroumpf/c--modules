/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/24 13:03:30 by alessandro        #+#    #+#             */
/*   Updated: 2020/01/07 12:13:39 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void){}

void Contact::set_values(std::string first_name_input, std::string last_name_input,
					std::string nickname_input, std::string login_input,
					std::string postal_address_input, std::string email_address_input,
					std::string phone_number_input, std::string birthday_date_input,
					std::string favorite_meal_input, std::string underwear_color_input,
					std::string darkest_secret_input)
{
	first_name = first_name_input;
	last_name = last_name_input;
	nickname = nickname_input;
	login = login_input;
	postal_address = postal_address_input;
	email_address = email_address_input;
	phone_number = phone_number_input;
	birthday_date = birthday_date_input;
	favorite_meal = favorite_meal_input;
	underwear_color = underwear_color_input;
	darkest_secret = darkest_secret_input;
}

std::string Contact::getFirst_name()
{
	return first_name;
}

std::string Contact::getLast_name()
{
	return last_name;
}

std::string Contact::getNickname()
{
	return (nickname);
}

std::string Contact::getLogin()
{
	return (login);
}

std::string Contact::getPostal_address()
{
	return (postal_address);
}

std::string Contact::getEmail_address()
{
	return (email_address);
}

std::string Contact::getPhone_number()
{
	return (phone_number);
}

std::string Contact::getBirthday_date()
{
	return(birthday_date);
}

std::string Contact::getFavorite_meal()
{
	return (favorite_meal);
}

std::string Contact::getUnderwear_color()
{
	return (underwear_color);
}

std::string Contact::getDarkest_secret()
{
	return (darkest_secret);
}
