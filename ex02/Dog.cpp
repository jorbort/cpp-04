#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Default dog constructor" << std::endl;
}

Dog::Dog( const Dog & src )
{
	this->brain = new Brain(*src.brain);
	this->type = src.type;
	std::cout << "dog copy constructor" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "dog destructor" << std::endl;
}

Dog &Dog::operator=( Dog const & rhs )
{
	delete this->brain;
	this->brain = new Brain(*rhs.brain);
	this->type = rhs.type;
	std::cout << "assignment dog contructor" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "guau guau guau" << std::endl;
}

std::string Dog::getIdea(int i) const
{
	return (this->brain->getIdeas(i));
}

void Dog::addIdea(std::string idea)
{
	this->brain->setIdeas(idea);
}