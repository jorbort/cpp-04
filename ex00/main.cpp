#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
std::cout <<std::endl;	
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout <<std::endl;
std::cout << "-------------------------" <<std::endl;
std::cout <<std::endl;

const WrongAnimal *wrongMeta = new WrongAnimal();
const WrongAnimal *wrongI = new WrongCat;
std::cout << wrongI->getType() << " " << std::endl;
wrongI->makeSound();
wrongMeta->makeSound();

std::cout << std::endl;
std::cout << "-------------------------" <<std::endl;
std::cout <<std::endl;
delete wrongMeta;
delete wrongI;
delete i;
delete j;
delete meta;

return 0;
}