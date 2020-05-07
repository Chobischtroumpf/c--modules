/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 17:26:00 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/05 17:41:41 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISQUAD_HPP
# define ISQUAD_HPP
# include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {};
	virtual int getCount(void) const = 0;
	virtual ISpaceMarine *getUnit(int index) const = 0;
	virtual int push(ISpaceMarine *unit) = 0;
};

#endif
