#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	John("John");
	ClapTrap	Marc("Marc");
	John.attack(Marc.getName());
	std::cout << John << std::endl;
	std::cout << Marc << std::endl;
	return 0;
}
