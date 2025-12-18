#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// --- TEST D'ABSTRACTION ---
	// Animal test;
	// Animal *meta = new Animal();

	std::cout << "--- CREATION DES ANIMAUX CONCRETS ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n--- TEST SOUNDS ---" << std::endl;
	j->makeSound();
	i->makeSound();

	std::cout << "\n--- NETTOYAGE ---" << std::endl;
	delete j;
	delete i;

	return 0;
}