#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t) {}
Weapon::~Weapon() {}

std::string const &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string t)
{
	type = t;
}