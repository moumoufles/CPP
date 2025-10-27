#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string n);
	~HumanB();

	void setWeapon(Weapon &w);
	void attack() const;
};

#endif