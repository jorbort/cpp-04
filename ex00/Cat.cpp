#include "Cat.hpp"


Cat::Cat()
{
	this->setType("Cat");
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

Cat &				Cat::operator=( Cat const & rhs )
{
	*this = rhs;
	std::cout << "assignment operator used in Cat class" << std::endl;
	return (*this);
}
