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

DiamondTrap::DiamondTrap(const std::string name): ScavTrap(name), FragTrap(name)
{
}

DiamondTrap::~DiamondTrap()
{}

DiamondTrap::DiamondTrap(const DiamondTrap& other): ScavTrap(name), FragTrap(name)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	return *this;
}

void	whoami()
{

}

std::ostream&	operator<<(std::ostream& out, const DiamondTrap& src)
{
	return (out);
}
