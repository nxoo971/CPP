/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 04:40:47 by jewancti          #+#    #+#             */
/*   Updated: 2023/02/23 09:47:39 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iomanip>
# include <sstream>
# include <cstdlib>

# include "PhoneBook.hpp"
# include "Contact.hpp"

# define	SETTERS_SIZE	5

typedef void (*action_add)(Contact&, const std::string&);

//	main.cpp
std :: string	get_input(bool isspace = true, bool numeric = false);

//	actions/add.cpp
void	add(PhoneBook &p);
//	actions/seach.cpp
void	search(const PhoneBook& rep);
//	actions/print.cpp
void	printPhoneBook(const PhoneBook& rep);
void	printContact(const Contact& contact);
void	printContact(const Contact& contact, const int index, bool selected = false);
void	printTitle(bool selected = false);

#endif