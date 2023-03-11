/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:44:23 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/10 18:03:56 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/Fixed.hpp"

//int		main(void)
//{
//	Fixed a;
//	Fixed const b( 10 );
//	Fixed const c( 42.42f );
//	Fixed const d( b );

//	a = Fixed( 1234.4321f );
//	std::cout << "a is " << a << std::endl;
//	std::cout << "b is " << b << std::endl;
//	std::cout << "c is " << c << std::endl;
//	std::cout << "d is " << d << std::endl;
//	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
//	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
//	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
//	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
//	return 0;
//}

#include <iostream>

int		main(void)
{
	Fixed a;
	Fixed c(static_cast<const float>(3.19));
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std:: cout << "Comparaison: " << std :: endl;
	std::cout << (b >= a) << std::endl;
	std::cout << (b <= a) << std::endl;
	std::cout << (b == a) << std::endl;
	std::cout << (b > a) << std::endl;
	std::cout << (b < a) << std::endl;
	std:: cout << "Operations: " << std :: endl;
	std::cout << (c + a) << std::endl;
	std::cout << (c - a) << std::endl;
	std::cout << (c * a) << std::endl;
	std::cout << (c / a) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}