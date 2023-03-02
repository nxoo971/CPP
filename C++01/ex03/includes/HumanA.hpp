/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:40:29 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/02 22:59:21 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMAN_A_HPP
# define HUMAN_A_HPP

# include "./Weapon.hpp"

class HumanA
{
	private:
		Weapon			*weapon;
		std :: string	name;
	public:
		HumanA(std :: string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void);
};

#endif