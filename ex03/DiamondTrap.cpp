/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:28:22 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/15 16:36:03 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"),
	ScavTrap(), FragTrap(), name("Unnamed")
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name), FragTrap(name), name(name)
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "<< name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->ClapTrap::name = other.name;
		this->hitPoint = other.hitPoint;
		this->energyPoint = other.energyPoint;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void			DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name;
	std::cout << " and my ClapTrap name is" << ClapTrap::name << std::endl;
}

std::ostream&	operator<<(std::ostream& out, const DiamondTrap& src)
{
	out << "DiamondTrap ";
	out << src.getName();
	out << " has:\n";
	out << src.getHit() << " of health\n";
	out << src.getEnergy() << " of energy\n";
	out << src.getAttackDamage() << " of damage";
	return (out);
}
