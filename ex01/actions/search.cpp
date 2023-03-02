/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:17:25 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 07:10:44 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../includes/Main.hpp"

static
int	isNumber(const std::string& input)
{
	int index = atoi(input.c_str());

    if (index == 0 && input != "0") {
        return -1;
	}
	return index;
}

void	search(const PhoneBook& rep)
{
	const	Contact	*contacts	= rep.getContacts();
	const	int		size		= rep.getCurrentSize();

	if (size == 0) {
		std :: cout << "PhoneBook is empty" << std :: endl;
		return ;
	}
	std :: cout << "PhoneBook: " << std :: endl;
	printTitle();
	printPhoneBook(rep);
	for (;;)
	{
		std :: cout << "Select an index" << std :: endl;
		const std :: string	input = get_input(false, true);
		int index = isNumber(input);
		if (index > -1 && index < size)
		{
			//printTitle(true);
			printContact(contacts[index]);
			break;	
		} else std :: cout << "Please enter a valid index" << std :: endl;
	}
}