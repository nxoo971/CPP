/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:13:07 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 21:29:45 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	const std :: string		str = "HI THIS IS BRAIN";
	const std :: string		*stringPTR = & str;
	const std :: string&	stringREF = str;

	std :: cout << "Addresses:" << std :: endl;
	std :: cout << "\tString memory address:\t" << & str << std :: endl;
	std :: cout << "\tPtr memory address:\t" << stringPTR << std :: endl;
	std :: cout << "\tRef memory address:\t" << & stringREF << std :: endl;

	std :: cout << "Values:" << std :: endl;
	std :: cout << "\tString value:\t" << str << std :: endl;
	std :: cout << "\tPtr value:\t" << *stringPTR << std :: endl;
	std :: cout << "\tRef value:\t" << stringREF << std :: endl;
	return (0);
}