#pragma once
#include <iostream>

class ClapTrap
{
public:

	ClapTrap(const std::string& name);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	// Member functions
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	// Getters
	std::string	getName(void) const;
	int			getHit(void) const;
	int			getEnergy(void) const;
	int			getDamage(void) const;

private:
	std::string	name;
	int			hit;
	int			energy;
	int			damage;
};

std::ostream&	operator<<(std::ostream &out, const ClapTrap& src);
