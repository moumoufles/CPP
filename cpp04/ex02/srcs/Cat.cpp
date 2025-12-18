#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other), _brain(NULL)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "[Cat] Assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

std::string Cat::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}