/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 11:19:06 by adorigo           #+#    #+#             */
/*   Updated: 2020/03/25 11:22:07 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "-> Pointer" << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << "-> Reference" << std::endl;
    std::cout << ref <<std::endl;

    return (0);
}