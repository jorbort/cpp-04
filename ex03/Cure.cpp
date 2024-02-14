#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure( const Cure & src ) : AMateria("cure")
{
	*this = src;
}

Cure::~Cure()
{

}

Cure &Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}