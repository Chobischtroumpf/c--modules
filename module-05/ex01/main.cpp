/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 10:52:36 by adorigo           #+#    #+#             */
/*   Updated: 2020/06/01 10:51:17 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassBureaucrat.hpp"
#include "ClassForm.hpp"

int main(int argc, char const *argv[])
{

	Bureaucrat patrice("Patrice", 100); // 1
	std::cout << "1: " << patrice << std::endl;
	patrice.incrementGrade(); // 2
	std::cout << "2: " << patrice << std::endl;
	patrice.decrementGrade(); // 3
	std::cout << "3: "<< patrice << std::endl;

	Form form1("Taxes", 100, 50);
	std::cout << "3.5 :" << form1 << std::endl;
	form1.beSigned(patrice);
	std::cout << "3.9" << form1 << std::endl;
	
	try // 4
	{
		
		Bureaucrat robot("Jen", 151);
		std::cout << "4: " << robot << std::endl;	
	}
	catch(std::exception &e)
	{
		std::cerr << "4: " << e.what() << std::endl;
	}

	try //5
	{
		Bureaucrat dieu("Dieu", 0);
		std::cout << "5: " << dieu << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "5: " << e.what() << std::endl;
	}
	try // 6
	{
		Bureaucrat interim("noname", 150);
		std::cout << "6: " << interim << std::endl;
		interim.decrementGrade();
		std::cout << interim << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try //7
	{
		Bureaucrat patron("Jack", 1);
		std::cout << "7: " << patron << std::endl;
		patron.incrementGrade();
		std::cout << patron << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form form2("NDA", 99, 50);
	std::cout << form2 << std::endl;
	try //8
	{
		patrice.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << "8 : "<< e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	Form form3("Other Paper", 101, 50);
	std::cout << form3 << std::endl;
	patrice.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		patrice.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;
}