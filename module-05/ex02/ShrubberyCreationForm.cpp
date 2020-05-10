/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:04:48 by adorigo           #+#    #+#             */
/*   Updated: 2020/05/08 16:56:34 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::name = std::string("Shrubbery Creation");

std::string const ShrubberyCreationForm::trees[3] = {
	"      /\\\n" \
	"     /\\*\\\n" \
	"    /\\O\\*\\\n" \
	"   /*/\\/\\/\\\n" \
	"  /\\O\\/\\*\\/\\\n" \
	" /\\*\\/\\*\\/\\/\\\n" \
	"/\\O\\/\\/*/\\/O/\\\n" \
	"      ||\n" \
	"      ||\n" \
	"      ||\n",
	"         v\n" \
	"        >X<\n" \
	"         A\n" \
	"        d$b\n" \
	"      .d\\$$b.\n" \
	"    .d$i$$\\$$b.\n" \
	"       d$$@b\n" \
	"      d\\$$$ib\n" \
	"    .d$$$\\$$$b\n" \
	"  .d$$@$$$$\\$$ib.\n" \
	"      d$$i$$b\n" \
	"     d\\$$$$@$b\n" \
	"  .d$@$$\\$$$$$@b.\n" \
	".d$$$$i$$$\\$$$$$$b.\n" \
	"        ###\n" \
	"        ###\n" \
	"        ###\n",
	"         *\n" \
	"        /|\\\n" \
	"       /*|O\\\n" \
	"      /*/|\\*\\\n" \
	"     /X/O|*\\X\\\n" \
	"    /*/X/|\\X\\*\\\n" \
	"   /O/*/X|*\\O\\X\\\n" \
	"  /*/O/X/|\\X\\O\\*\\\n" \
	" /X/O/*/X|O\\X\\*\\O\\\n" \
	"/O/X/*/O/|\\X\\*\\O\\X\\\n" \
	"        |X|\n" \
	"        |X|\n"
};

// Contructors /////////////////////////////////////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form(ShrubberyCreationForm::name, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source):
	Form(source), target(source.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char* ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
	return "ShrubberyCreationFormException: Cannot open file";
}

const char* ShrubberyCreationForm::WriteException::what() const throw()
{
	return "ShrubberyCreationFormException: Error while writing to the file";
}

// Operators ///////////////////////////////////////////////////////////////////

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm &source)
{
	(void)source;
	return *this;
}

// utils ///////////////////////////////////////////////////////////////////////

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string const shrubName = (this->target + "_shrubbery");
	std::ofstream outfile(shrubName, std::ios::out | std::ios::app);

	if (!outfile.is_open() || outfile.bad())
		throw TargetFileOpenException();
	int treeCount = (rand() % 6) + 1;
	for (int i = 0; i < treeCount; i++)
	{
		outfile << ShrubberyCreationForm::trees[rand() % 3];
		if (outfile.bad())
		{
			outfile << std::endl;
			outfile.close();
			throw WriteException();
		}
	}
	outfile << std::endl;
	outfile.close();
}
