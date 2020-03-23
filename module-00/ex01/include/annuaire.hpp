/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:06:40 by alessandro        #+#    #+#             */
/*   Updated: 2020/03/23 10:09:24 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_H
# define ANNUAIRE_H

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class Annuaire
{
private:
	Contact	contacts[8];
	int		amount;
public:
	Annuaire();
	virtual ~Annuaire();

	void	show_startup(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header(void);
};

#endif