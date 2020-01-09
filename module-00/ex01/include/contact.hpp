/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:23:39 by alessandro        #+#    #+#             */
/*   Updated: 2020/01/09 16:27:04 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <array>
# include <string>

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
							
		std::string getFirst_name();

		std::string getLast_name();

		std::string getNickname();

		std::string getLogin();

		std::string getPostal_address();

		std::string getEmail_address();

		std::string getPhone_number();

		std::string getBirthday_date();

		std::string getFavorite_meal();

		std::string getUnderwear_color();

		std::string getDarkest_secret();

		void setFirst_name(std::string first_name);

		void setLast_name(std::string last_name);

		void setNickname(std::string nickname);

		void setLogin(std::string login);

		void setPostal_address(std::string postal_address);

		void setEmail_address(std::string email_address);

		void setPhone_number(std::string phone_number);

		void setBirthday_date(std::string birthday_date);

		void setFavorite_meal(std::string favorite_meal);

		void setUnderwear_color(std::string underwear_color);

		void setDarkest_secret(std::string darkest_secret);
};

#endif
