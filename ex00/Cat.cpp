#include "Cat.hpp"


Cat::Cat()
{
	this->type = "Cat";
	std::cout << "a cat was created with the default constructor" << std::endl;
}

Cat::Cat( const Cat & src )
{
	*this = src;
	std::cout << "cat copy constructor has been used" << std::endl; 
}


Cat::~Cat()
{
	std::cout << "cat destructor invoked" << std::endl;
}

Cat &Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	std::cout << "assignment operator used in Cat class" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout  << "MEOOOOWWWWWW!!!" << std::endl;
}