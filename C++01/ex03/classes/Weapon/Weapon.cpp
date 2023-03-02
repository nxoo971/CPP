/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:24:20 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 21:59:20 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./../../includes/Weapon.hpp"

Weapon :: Weapon(void) { }

Weapon :: Weapon(const std :: string& type)
{
	this -> type = type;
}

Weapon :: ~Weapon() { }

const std :: string&	Weapon :: getType(void)
{
	return (this -> type);
}

void	Weapon :: setType(const std :: string& type)
{
	this -> type = type;
}