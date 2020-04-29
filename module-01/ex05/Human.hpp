/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:24:34 by adorigo           #+#    #+#             */
/*   Updated: 2020/04/27 11:27:33 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include "Brain.hpp"

class Human
{
private:
	const Brain brain;
public:
	Human();
	virtual ~Human();

	const Brain &getBrain(void) const;
	std::string identify(void) const;
};

#endif