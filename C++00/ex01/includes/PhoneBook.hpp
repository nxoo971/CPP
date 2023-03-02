/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:32:57 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/23 07:50:40 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"

# define	CONTACTS_SIZE	8

class	PhoneBook
{
	private:
		Contact	contacts[CONTACTS_SIZE];
		int		index;
		int		size;
	public:
		PhoneBook() : index(0), size(0) {};
		int		getCurrentIndex(void) const;
		int		getCurrentSize(void) const;
		void	updateIndex(void);
		void	updateSize(void);

		const	Contact	*getContacts(void) const;
				void	setContact(const Contact& contact);
				void	printContacts(void) const;
};

#endif