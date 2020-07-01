/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:47:44 by adorigo           #+#    #+#             */
/*   Updated: 2020/07/01 11:11:33 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void *serialize(void)
{
	static std::string alphabet = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static size_t alphaLength = alphabet.length();
	char *raw;

	raw = new char[20];
	for (int i = 0; i < 8; i++)
		raw[i] = alphabet[rand() % alphaLength];
	*reinterpret_cast<int*>(raw + 8) = rand() % 191919;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = alphabet[rand() % alphaLength];
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (d);
}