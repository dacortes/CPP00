/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:27:57 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 15:27:54 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include"../inc/phonebook.h"

class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_phone_number;
		std::string	_darkest_secret;
	public:
		Contact(void);
		/*
			Set atributes
		*/
		int	set_first_name(std::string first_name);
		int	set_last_name(std::string last_name);
		int	set_phone_number(std::string phone_number);
		int	set_darkest_secret(std::string darkest_secret);
		/*
			Get atributes
		*/
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
		~Contact(void);
};

#endif