/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 19:06:40 by alessandro        #+#    #+#             */
/*   Updated: 2021/01/19 13:42:33 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_H
# define ANNUAIRE_H

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include "ClassContact.hpp"

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