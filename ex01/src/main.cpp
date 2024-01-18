/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:12:29 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 16:00:43 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

void	center_space(const std::string str, int index)
{
	std::string tmp;

	tmp = str;
	std::cout << std::setw(index);
	std::cout << tmp;
}

void	show_contacts(PhoneBook p_book, bool is)
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
		/*
		std::cout << "|";
		center_space("1", 10);
		std::cout << "|";
		center_space("Dannyel", 10);
		std::cout << "|";
		center_space("Cortes", 10);
		std::cout << "|\n";
		*/
		for (unsigned int i = 0; i < 1; i++)
		{
			std::cout << "|";
			center_space(itoa(i), 10);
			std::cout << "|";
			center_space(p_book.contacts[i].get_first_name, 10);
			std::cout << "|";
			center_space(p_book.contacts[i].get_last_name, 10);
			std::cout << "\n";
		}
	}
}

void	menu(void)
{
	std::cout << "Select any of the allowed options:\n";
	std::cout << "*";
	center_space("ADD\n", 5);
	std::cout << "*";
	center_space("SEARCH\n", 8);
	std::cout << "*";
	center_space("EXIT\n", 6);
}

bool	init_data(std::string input, PhoneBook p_book, int *index)
{
	Contact	_new;
	int		stt;

	stt = 0;
	std::cout << "  first name:\n";
	std::getline(std::cin, input);
	stt += _new.set_first_name(input);
	std::cout << "  last name:\n";
	std::getline(std::cin, input);
	stt += _new.set_last_name(input);
	std::cout << "  phone number:\n";
	std::getline(std::cin, input);
	while (stt != ERROR && _new.set_phone_number(input))
	{
		stt += _new.set_phone_number(input);
		std::cout << "   Invalid input, the field 'phone number'"
			<< " only accepts digits\n";
		std::getline(std::cin, input);
	}
	std::cout << "  darkest_secret:\n";
	std::getline(std::cin, input);
	stt += _new.set_darkest_secret(input);
	if (stt < SUCCESS)
		return (true);
	p_book.add_Contact(_new, *index);
	index++;
	return (false);
}

bool	run(std::string input)
{
	PhoneBook p_book;
	int	index;

	index = 0;
	menu();
	while (true)
	{
		std::getline(std::cin, input);
		if (!input[0])
			return (true);
		if (!input.compare("ADD"))
		{
			if (init_data(input, p_book, &index))
				std::cout << "Error set paramts\n";
		}
		else if (!input.compare("SEARCH"))
		{
			show_contacts(p_book, false);
			show_contacts(p_book, true);
		}
		else if (!input.compare("EXIT"))
			return (false);
		else
		{
			std::cout << "Invalid option\n";
			menu();
		}
	}
	return (false);
}

int	main(void)
{
	std::string	input;
	//PhoneBook	p_book;
	/*
	Contact		c_cont;

	c_cont.set_first_name("Dacortes");
	c_cont.set_last_name("Cortes");
	c_cont.set_phone_number("123456789");
	c_cont.set_darkest_secret("queso");
	std::cout << "first name: " << c_cont.get_first_name() << "\n";
	p_book.add_Contact(c_cont, 0);
	*/
	return (run(input));
}
