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

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	ScavTrap(""), FragTrap("")
{
	this->name = name;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "<< name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		this->name = other.hitPoint;
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

void	DiamondTrap::whoami()
{
	std::cout << "My name is " << name;
	std::cout << " and my ClapTrap Name " << ClapTrap::name << std::endl;
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
