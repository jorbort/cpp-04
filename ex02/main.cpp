#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal *animals[4];

	std::cout << std::endl;
	std::cout << "loop para crear animales *" << std::endl;
	std::cout << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (i < 2)
		{
			animals[i] = new Dog;
			animals[i]->makeSound();
		}
		else 
		{
			animals[i] = new Cat;
			animals[i]->makeSound();
		}
	}
	std::cout << std::endl;
	std::cout << "final del loop para crear animales *" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << "loop para eliminar animales *" << std::endl;
	
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << std::endl;

	i->makeSound();// gato
	std::cout << std::endl;
	j->makeSound();//perro

	std::cout << std::endl;
	std::cout << std::endl;

	delete j;
	std::cout << std::endl;
	delete i;

	return 0;
}