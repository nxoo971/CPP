/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:43:51 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/05 22:05:01 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Fixed.hpp"

Fixed :: Fixed(void) : _nb(0) { std :: cout << "Default constructor called" << std :: endl;}

Fixed :: Fixed(const Fixed& fix)
{
	std :: cout << "Copy constructor called" << std :: endl;
	this -> operator=(fix);
}

Fixed :: ~Fixed() { std :: cout << "Destructor called" << std :: endl; }

Fixed &Fixed :: operator=(const Fixed& fix)
{
	std :: cout << "Copy assignment operator called" << std :: endl;
	this -> _nb = fix.getRawBits();
	return (*this);
}

int		Fixed :: getRawBits(void) const
{
	std :: cout << "getRawBits member function called" << std :: endl;
	return (this -> _nb);
}

void	Fixed :: setRawBits(int const raw)
{
	std :: cout << "setRawBits member function called" << std :: endl;
	this -> _nb = raw;
}