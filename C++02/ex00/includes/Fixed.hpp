/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:44:15 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/05 21:55:08 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_HPP
# define Fixed_HPP

# include <iostream>

class Fixed
{
	private:
		static const	int	_f	= 8;
						int	_nb;
	public:
		Fixed(void);
		Fixed(const Fixed& fix);
		~Fixed();

		Fixed	&operator=(const Fixed& fix);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};



#endif