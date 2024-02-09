#include "Dog.hpp"


Dog::Dog()
{
}

Dog::Dog( const Dog & src )
{
}

Dog::~Dog()
{
}

Dog &				Dog::operator=( Dog const & rhs )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	
	return o;
}
