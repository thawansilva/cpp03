#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	John("John");
	ClapTrap	Marc("Marc");
	John.attack(Marc.getName());
	return 0;
}
