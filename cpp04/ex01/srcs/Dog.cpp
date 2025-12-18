#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other), _brain(NULL)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "[Dog] Assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

std::string Dog::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}