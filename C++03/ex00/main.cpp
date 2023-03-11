/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewancti <jewancti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:44:16 by jewancti          #+#    #+#             */
/*   Updated: 2023/03/11 04:03:03 by jewancti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ClapTrap b("ClapB");

	b.setAttackDamage(10);
	std :: cout << "\tAttack method" << std :: endl;
	std :: cout << "Before: " << b.getEnergyPoints() << " energy pts";
	std :: cout << std :: endl;
	b.attack("Shesh");
	std :: cout << "After: " << b.getEnergyPoints() << " energy pts";
	std :: cout << std :: endl;
	std :: cout << "\tEnd Attack method" << std :: endl;

	std :: cout << "\t-------------------------" << std :: endl;

	std :: cout << "\tTakeDamage method" << std :: endl;
	std :: cout << "Before: " << b.getEnergyPoints() << " energy pts";
	std :: cout << std :: endl;
	b.takeDamage(8);
	std :: cout << "After: " << b.getEnergyPoints() << " energy pts";
	std :: cout << std :: endl;
	std :: cout << "\tEnd TakeDamage method" << std :: endl;

	std :: cout << "\t-------------------------" << std :: endl;

	std :: cout << "\tBeRepaired method" << std :: endl;
	std :: cout << "Before: " << b.getHitsPoints() << " hits pts";
	std :: cout << std :: endl;
	b.beRepaired(150);
	std :: cout << "After: " << b.getHitsPoints() << " hits pts";
	std :: cout << std :: endl;
	std :: cout << "\tEnd BeRepaired method" << std :: endl;
	return (0);
}