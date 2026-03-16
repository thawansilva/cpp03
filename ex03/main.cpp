/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:59:56 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/15 16:22:53 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void separator(std::string title)
{
    std::cout << "\n========== " << title << " ==========\n";
}

int main()
{
	separator("CLAPTRAP BASICO");
	
	ClapTrap a("Alpha");
	ScavTrap b("Betha");
	FragTrap f("Frag");

	separator("DIAMONDTRAP TEST");
	DiamondTrap d("Diamond");
	
	d.attack("boss");
	d.takeDamage(40);
	d.beRepaired(20);
	d.whoami();
	d.highFivesGuys();
	d.guardGate();
	
	separator("COPIA E ATRIBUICAO");
	
	ClapTrap c(a);
	c.attack("copy-target");
	
	ClapTrap d2("Temp");
	d2 = a;
	d2.attack("assigned-target");
	
	separator("DESTRUICAO EM CASCATA");
	{
		DiamondTrap temp("TempDiamond");
		temp.attack("enemy");
	}
	separator("RESULT");
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << f << std::endl;
	std::cout << d << std::endl;
	std::cout << d2 << std::endl;
	separator("FIM DOS TESTES");
	return 0;
}
