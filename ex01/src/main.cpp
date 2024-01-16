/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:12:29 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/16 16:31:28 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <iostream>
#include <cstring>
#include <iomanip> */
#include "../inc/phonebook.h"
void	center_space(const std::string str, int index)
{
	std::string tmp;

	tmp = str;
	std::cout << std::setw(index);
	std::cout << tmp;
}

void	show_contacts(bool is)
{
	if (!is)
	{
		std::cout << "|";
		center_space("Index", 10);
		std::cout << "|";
		center_space("First name", 10);
		std::cout << "|";
		center_space("Last name", 10);
		std::cout << "|\n";
	}
	else
	{
		std::cout << "|";
		center_space("1", 10);
		std::cout << "|";
		center_space("Dannyel", 10);
		std::cout << "|";
		center_space("Cortes", 10);
		std::cout << "|\n";
	}
}

void	menu(void)
{
	std::cout << "Allowed opntions:\n";
	std::cout << "*";
	center_space("ADD\n", 5);
	std::cout << "*";
	center_space("SEARCH\n", 8);
	std::cout << "*";
	center_space("EXIT\n", 6);
}

int	run(std::string input)
{
	menu();
	std::getline(std::cin, input);
	if (!input[0])
		return (ERROR);
	while (42)
	{
		if (!input[0])
			return (ERROR);
		if (!input.compare("ADD"))
			std::cout << "voy agregar cosas jaja:v\n";
		else if (!input.compare("SEARCH"))
			std::cout << "voy a buscar cosas\n";
		else if (!input.compare("EXIT"))
		{
			std::cout << "me voy\n";
			return (SUCCESS);
		}
		std::getline(std::cin, input);
	}
	return (SUCCESS);
}

int	main(void)
{
	std::string	input;

	/*
	show_contacts(false);
	show_contacts(true);
	*/
	run(input);
	//std::cout << "your name is: " << name << "\n";
	return (0);
}