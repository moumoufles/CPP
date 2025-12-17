#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	ClapTrap jim("Jim");

	bob.attack("Jim");
	
	bob.beRepaired(5);
	std::cout << "Bob HP: " << bob.getHitPoints() << " (Expected: 15)" << std::endl;
	std::cout << "Bob Energy: " << bob.getEnergyPoints() << " (Expected: 8)" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		bob.attack("un caillou");
	}
	std::cout << "Bob Energy: " << bob.getEnergyPoints() << std::endl;
	bob.attack("un caillou");
	bob.beRepaired(10);

	std::cout << "Jim HP: " << jim.getHitPoints() << std::endl;
	jim.takeDamage(20);
	jim.attack("Bob");
	jim.beRepaired(10);

	ClapTrap clone(bob);
	ClapTrap secondClone("Temp");
	secondClone = jim;
	
	std::cout << "Clone of Bob Name: " << clone.getName() << std::endl;
	std::cout << "Assignment Jim to secondClone HP: " << secondClone.getHitPoints() << std::endl;

	return 0;
}