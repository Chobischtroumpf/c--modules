/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 14:38:25 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/23 14:42:09 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


void	memoryLeak()
{
	std::string	*panthere = new std::string("String Panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}
