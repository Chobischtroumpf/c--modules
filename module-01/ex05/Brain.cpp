/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:24:29 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/27 11:31:38 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

int Brain::getNeurones(void) const
{
	return (this->neurones);
}

std::string Brain::identify(void) const
{
	long adr = (long)this;
	
	std::stringstream str;
	str << "0x" << std::uppercase << std::hex << adr;
	return (str.str());
}