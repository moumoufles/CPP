#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "[WrongCat] Constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "[WrongCat] Assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow? Wait, I'm a WrongCat..." << std::endl;
}