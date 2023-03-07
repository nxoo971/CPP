/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:44:15 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/07 01:05:02 by jewancti         ###   ########.fr       */
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

		Fixed	&operator=(const Fixed& fix);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
};

std :: ostream	&operator<<(std :: ostream& os, const Fixed& fix);

#endif