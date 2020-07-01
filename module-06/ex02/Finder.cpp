/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finder.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:20:21 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/30 15:53:10 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Finder.hpp"

Base *generator(void)
{
	int r = rand() % 100;
	if (r > 66)
		return(new A);
	if (r > 33)
		return(new B);
	return(new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}