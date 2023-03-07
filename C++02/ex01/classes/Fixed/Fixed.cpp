/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:43:51 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/07 01:00:40 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Fixed.hpp"

Fixed :: Fixed(void) : _nb(0) { std :: cout << "Default constructor called" << std :: endl;}

Fixed :: Fixed(const Fixed& fix)
{
	std :: cout << "Copy constructor called" << std :: endl;
	this -> operator=(fix);
}

Fixed :: Fixed(int const nb)
{
	std :: cout << "Int constructor called" << std :: endl;
	this -> _nb = nb << this -> _f;
}

Fixed :: Fixed(float const nb)
{
	std :: cout << "Float constructor called" << std :: endl;
	this -> _nb = static_cast<int>(roundf(nb * (1 << this -> _f)));
}

Fixed :: ~Fixed() { std :: cout << "Destructor called" << std :: endl; }

/**/

Fixed &Fixed :: operator=(const Fixed& fix)
{
	std :: cout << "Copy assignment operator called" << std :: endl;
	this -> _nb = fix.getRawBits();
	return (*this);
}

std :: ostream	&operator<<(std :: ostream& os, const Fixed& fix)
{
	os << fix.toFloat();
	return (os);
}

int		Fixed :: getRawBits(void) const
{
	return (this -> _nb);
}

void	Fixed :: setRawBits(int const raw)
{
	std :: cout << "setRawBits member function called" << std :: endl;
	this -> _nb = raw;
}

/**/

float	Fixed :: toFloat(void) const
{
	return static_cast<float>(this -> _nb) / static_cast<float>(1 << this -> _f);
}

int		Fixed :: toInt(void) const
{
	return this -> _nb >> this -> _f;
}