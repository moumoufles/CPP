#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string &Name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

	void guardGate();
	void attack(const std::string &target);
};

#endif