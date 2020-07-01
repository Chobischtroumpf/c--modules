/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 13:44:06 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/18 16:09:15 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main(void)
{
	srand(time(NULL));
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat jack = Bureaucrat("Jack K", 25);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat jean = Bureaucrat("Jean Jonson", 101);
	OfficeBlock ob;

	ob.setIntern(idiotOne);
	ob.setSigner(bob);

	try
	{
		ob.doBureaucracy("Shrubbery Creation", "home");
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		ob.setExecutor(bob);
	}
	catch(OfficeBlock::BureaucratAlreadyAssignedException & e)
	{
		std::cerr << bob << " has already a position in this Office Block" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	ob.setExecutor(hermes);

	try
	{
		ob.doBureaucracy("Shrubbery Creation", "home");
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	ob.setExecutor(jean);

	try
	{
		ob.doBureaucracy("Presidential Pardon", "Morty");
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	ob.setSigner(jack);
	try
	{
		ob.doBureaucracy("Presidential Pardon", "Morty");
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
