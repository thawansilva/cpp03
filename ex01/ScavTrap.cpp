#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	hit = 100;
	energy = 50;
	damage = 20;
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
		hit = other.getHit();
		energy = other.getEnergy();
		damage = other.getDamage();
	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (energy <= 0 || hit <= 0)
		return ;
	energy--;
	std::cout << "ScavTrap " ;
	std::cout << name << " attacks ";
	std::cout << target << ", causing ";
	std::cout << damage << " points of damage!" << std::endl;
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
	out << src.getDamage() << " of damage";
	return (out);
}
