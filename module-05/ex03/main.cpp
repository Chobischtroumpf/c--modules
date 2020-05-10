/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/09 21:30:55 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(int argc, char const *argv[])
{
	srand(time(NULL));
	Intern someIntern;

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat patrice("Patrice", 25); // 1
	std::cout << "1: " << patrice << std::endl;
	patrice.incrementGrade(); // 2
	std::cout << "2: " << patrice << std::endl;
	patrice.decrementGrade(); // 3
	std::cout << "3: "<< patrice << std::endl;

	Form *shrub = someIntern.makeForm("Shrubbery Creation", "home");
	std::cout << "4: " <<*shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(patrice);

	Form *pres = someIntern.makeForm("Presidential Pardon", "patrice");
	std::cout << "5: " << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = someIntern.makeForm("Robotomy Request", "Bender");
	std::cout << "6: " << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(patrice);
	patrice.executeForm(*robot);
	patrice.executeForm(*robot);


	std::cout << "try 1" << std::endl;

	try
	{
		patrice.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 2" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 3" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("patrice");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(patrice);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 4" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("patrice");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		patrice.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Try 5" << std::endl;

	try
	{
		Form *ran = someIntern.makeForm("Random Form", "nobody");
		std::cout << ran << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}
