#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default dog contructor" << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
	std::cout << "dog copy contructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "dog destructor" << std::endl;
}

Dog &Dog::operator=( Dog const & rhs )
{
	this->type = rhs.type;
	std::cout << "assignment dog contructor" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "guau guau guau" << std::endl;
}
