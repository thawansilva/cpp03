#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name): name(name), hit(10),
	energy(10), damage(0)
{
	std::cout << name << " created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

void	ClapTrap::attack(const std::string& target)
{
	if (energy <= 0 || hit <= 0)
		return ;
	energy--;
	std::cout << "ClapTrap " ;
	std::cout << name << " attacks ";
	std::cout << target << ", causing ";
	std::cout << damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hit -= amount;
	energy--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energy <= 0 || hit <= 0)
		return ;
	hit += amount;
	energy--;
}

std::string	ClapTrap::getName(void) const
{
	return name;
}

int			ClapTrap::getHit(void) const
{
	return hit;
}

int			ClapTrap::getEnergy(void) const
{
	return energy;
}

int			ClapTrap::getDamage(void) const
{
	return damage;
}

std::ostream&	operator<<(std::ostream &out, const ClapTrap& src)
{
	out << src.getName();
	out << " has:\n";
	out << src.getHit() << " of health\n";
	out << src.getEnergy() << " of energy\n";
	out << src.getDamage();
	return (out);
}
