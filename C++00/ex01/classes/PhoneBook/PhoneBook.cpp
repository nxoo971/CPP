/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:42:56 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/01 22:15:30 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/PhoneBook.hpp"

int		PhoneBook::getCurrentIndex() const { return this -> index; }
int		PhoneBook::getCurrentSize() const { return this -> size; }

void	PhoneBook::updateIndex() { this -> index = (this -> index + 1 == CONTACTS_SIZE) ? 0 : this -> index + 1; }
void	PhoneBook::updateSize() { if (this -> size < CONTACTS_SIZE) this -> size++; }

const Contact	*PhoneBook::getContacts(void) const
{
	return &(this -> contacts[0]);
}

void	PhoneBook::setContact(const Contact& contact)
{
	this -> contacts[this -> index] = contact;
	this -> updateIndex();
	this -> updateSize();
}

void	PhoneBook::printContacts(void) const
{
	const Contact *contacts = getContacts();

	for (int i = 0; i < this -> index; i++) {
		std :: cout << contacts[i].getFirstName() << std :: endl;
		std :: cout << contacts[i].getLastName() << std :: endl;
		std :: cout << contacts[i].getNickName() << std :: endl;
		std :: cout << contacts[i].getPhoneNumber() << std :: endl;
		std :: cout << contacts[i].getDarkestSecret() << std :: endl;
	}
}
