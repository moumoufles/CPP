#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int count = 4;
	Animal* animals[count];

	std::cout << "--- CREATION DU TABLEAU ---" << std::endl;
	for (int i = 0; i < count; i++)
	{
		if (i < count / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n--- TEST DEEP COPY ---" << std::endl;
	Dog basic;
	basic.setIdea(0, "J'adore les croquettes");
	
	std::cout << "Basic pense : " << basic.getIdea(0) << std::endl;
	{
		std::cout << "--- Bloc de copie temporaire ---" << std::endl;
		Dog tmp = basic;
		
		std::cout << "Tmp (copie) pense : " << tmp.getIdea(0) << std::endl;
		
		std::cout << "Changement d'idée pour Tmp..." << std::endl;
		tmp.setIdea(0, "Je prefere le pâté");
		
		std::cout << "Tmp pense maintenant : " << tmp.getIdea(0) << std::endl;
		std::cout << "Basic pense toujours : " << basic.getIdea(0) << " (Preuve de Deep Copy)" << std::endl;
		
		std::cout << "--- Sortie du bloc (Destruction de Tmp) ---" << std::endl;
	} 

	std::cout << "Basic est encore en vie et pense toujours : " << basic.getIdea(0) << std::endl;

	std::cout << "\n--- DESTRUCTION DU TABLEAU ---" << std::endl;
	for (int i = 0; i < count; i++)
	{
		delete animals[i];
	}

	return 0;
}