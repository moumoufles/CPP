#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "[Brain] Assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return this->ideas[i];
	return "";
}