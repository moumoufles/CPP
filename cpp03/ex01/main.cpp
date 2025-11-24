#include "ScavTrap.hpp"

int main()
{
	ClapTrap MachineA("Robot");
	ClapTrap MachineB("Robot");
	MachineA.attack(MachineB.getName());
	MachineB.takeDamage(5);
	MachineA.beRepaired(1);

	std::cout << std::endl << std::endl;

	ScavTrap ScavA("Maurice");
	ScavA.guardGate();
	ScavA.attack("Paul");
	ScavA.takeDamage(10);

	ScavTrap ScavB(ScavA);
	ScavB.beRepaired(5);
	ScavB.beRepaired(1);

	ScavTrap ScavC = ScavA;
	ScavC.takeDamage(100);
	ScavC.takeDamage(100);
	ScavC.attack("Pierre");
	return 0;
}