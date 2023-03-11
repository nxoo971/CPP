/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:43:51 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/10 18:18:06 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Fixed.hpp"

Fixed :: Fixed(void) : _nb(0) { }

Fixed :: Fixed(const Fixed& fix)
{
	this -> operator=(fix);
}

Fixed :: Fixed(int const nb)
{
	this -> _nb = nb << this -> _f;
}

Fixed :: Fixed(float const nb)
{
	this -> _nb = static_cast<int>(roundf(nb * (1 << this -> _f)));
}

Fixed :: ~Fixed() { }

/**/

std :: ostream	&operator<<(std :: ostream& os, const Fixed& fix)
{
	os << fix.toFloat();
	return (os);
}

Fixed	&Fixed :: operator=(const Fixed& fix)
{
	this -> _nb = fix.getRawBits();
	return (*this);
}

Fixed	&Fixed :: operator++(void)
{
	++this -> _nb;
	return (*this);
}

Fixed	Fixed :: operator++(int)
{
	Fixed	old = *this;
	this -> operator++();
	return (old);
}

Fixed	&Fixed :: operator--(void)
{
	--this -> _nb;
	return (*this);
}

Fixed	Fixed :: operator--(int)
{
	Fixed	old = *this;
	this -> operator--();
	return (old);
}

Fixed	Fixed :: operator+(const Fixed& fix) const
{
	Fixed	tmp;
	tmp.setRawBits(this -> getRawBits() + fix.getRawBits());
	return (tmp);
}

Fixed	Fixed :: operator-(const Fixed& fix) const
{
	Fixed	tmp;
	tmp.setRawBits(this -> getRawBits() - fix.getRawBits());
	return (tmp);
}

Fixed	Fixed :: operator*(const Fixed& fix) const
{
	Fixed	tmp;
	tmp.setRawBits(static_cast<int>(roundf(this -> toFloat() * fix.toFloat())));
	return (tmp);
}

Fixed	Fixed :: operator/(const Fixed& fix) const
{
	Fixed	tmp;
	tmp.setRawBits(static_cast<int>(roundf(this -> toFloat() / fix.toFloat())));
	return (tmp);
}

bool	Fixed :: operator>(const Fixed& fix) const
{
	return (this -> _nb > fix.getRawBits());
}

bool	Fixed :: operator<(const Fixed& fix) const
{
	return (this -> _nb < fix.getRawBits());
}

bool	Fixed :: operator>=(const Fixed& fix) const
{
	return (this -> _nb >= fix.getRawBits());
}

bool	Fixed :: operator<=(const Fixed& fix) const
{
	return (this -> _nb <= fix.getRawBits());
}

bool	Fixed :: operator==(const Fixed& fix) const
{
	return (this -> _nb == fix.getRawBits());
}

bool	Fixed :: operator!=(const Fixed& fix) const
{
	return (this -> _nb != fix.getRawBits());
}

int		Fixed :: getRawBits(void) const
{
	return (this -> _nb);
}

void	Fixed :: setRawBits(int const raw)
{
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

Fixed &Fixed :: min(Fixed& fix1, Fixed& fix2)
{
	return (fix1.getRawBits() > fix2.getRawBits() ? fix2 : fix1);
}

Fixed Fixed :: min(const Fixed& fix1, const Fixed& fix2)
{
	return (fix1 > fix2 ? fix2 : fix1);
}

Fixed &Fixed :: max(Fixed& fix1, Fixed& fix2)
{
	return (fix1.getRawBits() > fix2.getRawBits() ? fix1 : fix2);
}

Fixed Fixed :: max(const Fixed& fix1, const Fixed& fix2)
{
	return (fix1 > fix2 ? fix1 : fix2);
}