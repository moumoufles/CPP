#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Bob");
	scav.guardGate();

	scav.attack("Claudine");
	std::cout << "Energy after attack: " << scav.getEnergyPoints() << std::endl;

	scav.takeDamage(30);
	std::cout << "HP after damage: " << scav.getHitPoints() << std::endl;
	scav.beRepaired(10);
	std::cout << "HP after repair: " << scav.getHitPoints() << std::endl;

	scav.takeDamage(150);
	scav.attack("cible");
	scav.guardGate();

	return 0;
}