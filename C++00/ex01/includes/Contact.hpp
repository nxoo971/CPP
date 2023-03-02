/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:37:38 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/23 09:49:50 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact
{
	private:
		std :: string	_firstName;	
		std :: string	_lastName;
		std :: string	_nickName;
		std :: string	_phoneNumber;
		std :: string	_darkestSecret;
	public:
	//	getters
		const	std :: string		getFirstName(void) const;
		const	std :: string		getLastName(void) const;
		const	std :: string		getNickName(void) const;
		const	std :: string		getPhoneNumber(void) const;
		const	std :: string		getDarkestSecret(void) const;
	//	setters
				void			setFirstName(const std :: string& firstName);
				void			setLastName(const std :: string& lastName);
				void			setNickName(const std :: string& nickName);
				void			setPhoneNumber(const std :: string& phoneNumber);
				void			setDarkestSecret(const std :: string& secret);
};

#endif