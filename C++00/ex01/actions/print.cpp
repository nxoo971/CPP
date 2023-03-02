/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:17:25 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 09:42:44 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Main.hpp"

template<typename T>
static
void	printFormat(T value)
{
	const int	precision		= 10;

	std :: ostringstream ss;
	ss << value;
    std :: string text = ss.str();
	int	length = text.length();
	if (length <= precision)
		std :: cout << std :: right << std :: setw(precision) << text << "|";
	else
		std :: cout << text.substr(0, precision - 1) + "." << "|";
}

void	printTitle(bool selected)
{
	printFormat("Index");
	printFormat("First Name");
	printFormat("Last Name");
	printFormat("Nick Name");
	if (selected) {
		printFormat("Phone");
		printFormat("Secret");
	}
	std :: cout << std :: endl;
}

void	printContact(const Contact& contact, const int index, bool selected)
{
	printFormat(index);
	printFormat(contact.getFirstName());
	printFormat(contact.getLastName());
	printFormat(contact.getNickName());
	if (selected) {
		printFormat(contact.getPhoneNumber());
		//printFormat(contact.getDarkestSecret());
		std :: cout << "sorry, dont know what ya mean";
	}
}

void	printContact(const Contact& contact)
{
	std :: cout << "First name: " << contact.getFirstName() << std :: endl;
	std :: cout << "Last name: " << contact.getLastName() << std :: endl;
	std :: cout << "Nick name: " << contact.getNickName() << std :: endl;
	std :: cout << "Phone number: " << contact.getPhoneNumber() << std :: endl;
	std :: cout << "Darkest secret: " << contact.getDarkestSecret() << std :: endl;
}

void	printPhoneBook(const PhoneBook& rep)
{
	const	Contact	*contacts	= rep.getContacts();
	const	int		size		= rep.getCurrentSize();
			int		i;

	for (i = 0; i < size; i++) {
		printContact(contacts[i], i);
		std :: cout << std :: endl;
	}
	std :: cout << std :: endl;
}