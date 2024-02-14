#include "AMateria.hpp"


AMateria::AMateria()
{
	type = "";
	std::cout << "Materia default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &src) : type(src)
{
	std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}
std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria *AMateria::clone() const
{
	return ((AMateria *)this);
}

void AMateria::use(ICharacter &target)
{
	std::cout << this->type << "used on " << target.getName() << std::endl;
}