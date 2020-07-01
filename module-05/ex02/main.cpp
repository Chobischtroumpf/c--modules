/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 10:53:23 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(int argc, char const *argv[])
{

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat patrice("Patrice", 25); // 1
	std::cout << "1: " << patrice << std::endl;
	patrice.incrementGrade(); // 2
	std::cout << "2: " << patrice << std::endl;
	patrice.decrementGrade(); // 3
	std::cout << "3: "<< patrice << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(patrice);

	Form *pres = new PresidentialPardonForm("patrice");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
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

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}
