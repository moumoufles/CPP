#include "ClapTrap.hpp"

int main()
{
	ClapTrap MachineA("Robot");
	ClapTrap MachineB("Robot");
	MachineA.attack(MachineB.getName());
	MachineB.takeDamage(1000);
	MachineB.attack("Test");
	return 0;
}