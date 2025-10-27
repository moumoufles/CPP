#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w) {}
HumanA::~HumanA() {}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}