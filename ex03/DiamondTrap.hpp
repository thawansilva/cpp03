/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:28:15 by thaperei          #+#    #+#             */
/*   Updated: 2026/03/15 16:36:32 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class DiamondTrap: public ScavTrap, public FragTrap
{
public:

	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);

	void	whoami();
private:
	int _value;
};

std::ostream&	operator<<(std::ostream& out, const DiamondTrap& src);
