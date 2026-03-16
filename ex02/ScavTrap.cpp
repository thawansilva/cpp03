/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:13:17 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/15 16:13:17 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Unnamed")
{
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "Default ScavTrap " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		name = other.getName();
		hitPoint = other.getHit();
		energyPoint = other.getEnergy();
		attackDamage = other.getAttackDamage();
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoint <= 0 || hitPoint <= 0)
		return ;
	energyPoint--;
	std::cout << "ScavTrap " ;
	std::cout << name << " attacks ";
	std::cout << target << ", causing ";
	std::cout << attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << name << " is in Gate keeper mode" << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const ScavTrap& src)
{
	out << "ScavTrap ";
	out << src.getName();
	out << " has:\n";
	out << src.getHit() << " of health\n";
	out << src.getEnergy() << " of energy\n";
	out << src.getAttackDamage() << " of damage";
	return (out);
}
