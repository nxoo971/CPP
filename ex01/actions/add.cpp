/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:17:25 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/23 09:46:39 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Main.hpp"

static
void	setFirstName(Contact& contact, const std::string& value) {
	contact.setFirstName(value);
}

static
void	setLastName(Contact& contact, const std::string& value) {
	contact.setLastName(value);
}

static
void	setNickname(Contact& contact, const std::string& value) {
	contact.setNickName(value);
}

static
void	setPhoneNumber(Contact& contact, const std::string& value) {
	contact.setPhoneNumber(value);
}

static
void	setDarkestSecret(Contact& contact, const std::string& value) {
	contact.setDarkestSecret(value);
}

void	add(PhoneBook &p)
{
	static const	std :: string	setters[SETTERS_SIZE]	= {
		"First name",
		"Last name",
		"Nick name",
		"Phone number",
		"Darkest secret"
	};
	static const	action_add		add[SETTERS_SIZE]		= {
		& setFirstName,
		& setLastName,
		& setNickname,
		& setPhoneNumber,
		& setDarkestSecret,
	};

	Contact	contact;
	for (int i = 0; i < SETTERS_SIZE; i++) {
		std :: cout << setters[i] << ":" << std :: endl;
		add[i](contact, get_input(false));
	}
	p.setContact(contact);
}