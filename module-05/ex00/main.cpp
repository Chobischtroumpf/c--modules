/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 09:20:31 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/07 10:48:10 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char const *argv[])
{
	Bureaucrat patrice("Patrice", 50); // 1
	std::cout << "1: " << patrice << std::endl;
	patrice.incrementGrade(); // 2
	std::cout << "2: " << patrice << std::endl;
	patrice.decrementGrade(); // 3
	std::cout << "3: "<< patrice << std::endl;

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
}