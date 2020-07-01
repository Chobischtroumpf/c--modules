/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:02:33 by adorigo           #+#    #+#             */
/*   Updated: 2020/07/01 11:11:18 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		std::cout << "test " << i << ": " << '\n';
		void *raw = serialize();
		Data *dt = deserialize(raw);

		std::cout << "\tstr1: " << dt->s1 << '\n';
		std::cout << "\tn:    " << dt->n << '\n';
		std::cout << "\tstr2: " << dt->s2 << std::endl;

		delete static_cast<char*>(raw);
		delete dt;
	}

	return 0;
}