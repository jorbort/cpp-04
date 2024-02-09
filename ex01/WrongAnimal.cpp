#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	this->type = "";
	std::cout << "deafault Wrong animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
	std::cout << "copy wrong animal constructor" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong animal destructor" << std::endl;
}
WrongAnimal &WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->type = rhs.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "wrong animal noise" << std::endl;
}