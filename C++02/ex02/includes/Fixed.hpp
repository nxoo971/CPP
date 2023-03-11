/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:44:15 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/10 18:10:22 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const	int	_f	= 8;
						int	_nb;
	public:
		Fixed(void);
		Fixed(const Fixed& fix);
		Fixed(int const nb);
		Fixed(float const nb);
		~Fixed();

		Fixed&	operator=(const Fixed& fix);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);
		Fixed	operator-(const Fixed& fix) const;
		Fixed	operator+(const Fixed& fix) const;
		Fixed	operator*(const Fixed& fix) const;
		Fixed	operator/(const Fixed& fix) const;
		bool	operator>(const Fixed& fix) const;
		bool	operator<(const Fixed& fix) const;
		bool	operator>=(const Fixed& fix) const;
		bool	operator<=(const Fixed& fix) const;
		bool	operator==(const Fixed& fix) const;
		bool	operator!=(const Fixed& fix) const;
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed&	min(Fixed& fix1, Fixed& fix2);
		static Fixed	min(const Fixed& fix1, const Fixed& fix2);
		static Fixed&	max(Fixed& fix1, Fixed& fix2);
		static Fixed	max(const Fixed& fix1, const Fixed& fix2);
};

std :: ostream	&operator<<(std :: ostream& os, const Fixed& fix);

#endif