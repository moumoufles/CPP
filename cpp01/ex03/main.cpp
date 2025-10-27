#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon sword("Sword");
		HumanA knight("Knight", sword);
		knight.attack();
		sword.setType("Excalibur");
		knight.attack();
	}
	{
		Weapon weapon("Axe");
		HumanB thor("Thor");
		thor.attack();
		thor.setWeapon(weapon);
		thor.attack();
		weapon.setType("Stormbreaker");
		thor.attack();
	}
	return 0;
}