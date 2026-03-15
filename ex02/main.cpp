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

void separator(std::string title)
{
    std::cout << "\n========== " << title << " ==========\n";
}

int main()
{
	separator("CLAPTRAP BASICO");
	
	ClapTrap a("Alpha");
	ClapTrap b("Beta");
	
	a.attack("Beta");
	b.takeDamage(0);
	b.beRepaired(5);
	
	separator("ENERGIA ACABANDO");
	
	for (int i = 0; i < 12; i++)
		a.attack("dummy");
	
	separator("DANO EXCESSIVO");
	
	b.takeDamage(1000);
	b.attack("ghost");
	b.beRepaired(5);
	
	separator("SCAVTRAP TEST");
	
	ScavTrap s("Guardian");
	
	s.attack("enemy");
	s.takeDamage(30);
	s.beRepaired(10);
	s.guardGate();

	separator("FRAGTRAP TEST");

	FragTrap f("Fraggy");
	f.attack("enemy");
	f.takeDamage(50);
	f.beRepaired(25);
	f.highFivesGuys();

	separator("RESULT");
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << s << std::endl;
	std::cout << f << std::endl;
	//separator("DIAMONDTRAP TEST");
	//
	//DiamondTrap d("Diamond");
	//
	//d.attack("boss");
	//d.takeDamage(40);
	//d.beRepaired(20);
	//d.whoAmI();
	//
	//separator("COPIA E ATRIBUICAO");
	//
	//ClapTrap c(a);
	//c.attack("copy-target");
	//
	//ClapTrap d2("Temp");
	//d2 = a;
	//d2.attack("assigned-target");
	//
	//separator("DESTRUICAO EM CASCATA");
	//{
	//	DiamondTrap temp("TempDiamond");
	//	temp.attack("enemy");
	//}
	separator("FIM DOS TESTES");
	return 0;
}
