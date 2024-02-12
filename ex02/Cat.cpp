#include "Cat.hpp"


Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "a cat was created with the default constructor" << std::endl;
}

Cat::Cat( const Cat & src )
{
	this->brain = new Brain(*src.brain);
	this->type = src.type;
	std::cout << "cat copy constructor has been used" << std::endl; 
}


Cat::~Cat()
{
	delete this->brain;
	std::cout << "cat destructor invoked" << std::endl;
}

Cat &Cat::operator=( Cat const & rhs )
{
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	this->type = rhs.type;
	std::cout << "assignment operator used in Cat class" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout  << "MEOOOOWWWWWW!!!" << std::endl;
}

std::string Cat::getIdea(int i) const
{
	return (this->brain->getIdeas(i));
}

void Cat::addIdea(std::string idea)
{
	this->brain->setIdeas(idea);
}