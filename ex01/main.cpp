#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
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