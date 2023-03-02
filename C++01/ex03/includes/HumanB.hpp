/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:55:26 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 23:00:03 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_B_HPP
# define HUMAN_B_HPP

# include "./Weapon.hpp"

class HumanB
{
	private:
		Weapon			*weapon;
		std :: string	name;
	public:
		HumanB(const std :: string name);
		~HumanB(void);

		void	setName(const std :: string name);
		void	setWeapon(Weapon& weapon);
		void	attack(void);
};

#endif