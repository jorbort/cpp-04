#include "Animal.hpp"

Animal::Animal()
{
	this->type = "";
	std::cout << "deafult Animal constructor" << std::endl;
}

Animal::Animal( const Animal & src )
{
	*this = src;
	std::cout << "copy animal constructor" << std::endl;
}

Animal &				Animal::operator=( Animal const & rhs )
{
	*this = rhs;
	return (*this);
	std::cout << "assignment operator Animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string &Animal::getType(void)
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound(void)
{
	std::cout << "standard Animal noise" << std::endl;
}