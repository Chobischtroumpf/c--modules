/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 09:24:03 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 08:46:18 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	private:
		int amount;
		AMateria *sources[4];
	public:
		// Constructors
		MateriaSource ();
		MateriaSource (const MateriaSource &source);
		virtual ~MateriaSource ();

		// Operators
		MateriaSource &operator=(const MateriaSource &source);

		// Utils
		void learnMateria(AMateria *materia);
		AMateria *createMateria(std::string const &type);

};

# endif
