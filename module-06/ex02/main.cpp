/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:01:01 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/30 15:53:19 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Finder.hpp"

int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 30; i++)
	{
		Base *o = generator();
		std::cout << "test " << i << ": ";
		identify_from_pointer(o);
		std::cout << ", ";
		identify_from_reference(*o);
		std::cout << std::endl;
		delete o;
	}
	return 0;
}