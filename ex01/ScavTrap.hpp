#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string& name);
	~ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap&	operator=(const ScavTrap& other);
	// Member function
	void		guardGate();
	void		attack(const std::string& target);
};

std::ostream&	operator<<(std::ostream& out, const ScavTrap& src);
