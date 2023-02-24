/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:42:56 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/22 21:02:24 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Contact.hpp"

//	getters
void			Contact::setFirstName(const std :: string& firstName)
{
	this -> _firstName = firstName;
}

void			Contact::setLastName(const std :: string& lastName)
{
	this -> _lastName = lastName;
}

void			Contact::setNickName(const std :: string& nickName)
{
	this -> _nickName = nickName;
}

void			Contact::setPhoneNumber(const std :: string& phoneNumber)
{
	this -> _phoneNumber = phoneNumber;
}

void			Contact::setDarkestSecret(const std :: string& secret)
{
	this -> _darkestSecret = secret;
}

//	setters
const std :: string		Contact::getFirstName(void) const
{
	return (this -> _firstName);
}

const std :: string		Contact::getLastName(void) const
{
	return (this -> _lastName);
}

const std :: string		Contact::getNickName(void) const
{
	return (this -> _nickName);
}

const std :: string		Contact::getPhoneNumber(void) const
{
	return (this -> _phoneNumber);
}

const std :: string		Contact::getDarkestSecret(void) const
{
	return (this -> _darkestSecret);
}
