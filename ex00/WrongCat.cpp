#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "wrong cat default constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
	std::cout << "Wrong cat copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor" << std::endl;
}

WrongCat &WrongCat::operator=( WrongCat const & rhs )
{
	this->type = rhs.type;
	std::cout << "assignment operator called in WrongCat" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "uaim" << std::endl;
}