#include "FragTrap.hpp"

int main()
{
	ClapTrap c("Clappy");
	ScavTrap s("Scavvy");
	FragTrap f("Fraggy");

	std::cout << std::endl;
	c.attack("a snake");
	s.guardGate();
	f.highFivesGuys();
	std::cout << std::endl;

	return 0;
}