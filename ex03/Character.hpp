#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
	AMateria *inventory[4];	
	public:

		Character();
		Character( Character const & src );
		~Character();

		Character &operator=( Character const & rhs );


};


#endif 