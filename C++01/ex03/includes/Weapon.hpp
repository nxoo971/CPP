/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:32:47 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 21:36:11 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std :: string	type;
	public:
		Weapon(void);
		Weapon(const std :: string& type);
		~Weapon();

		const	std :: string&	getType(void);
				void			setType(const std :: string& type);
};

#endif