#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}