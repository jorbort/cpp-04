#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <string>
#include "AMateria.hpp"

class IMateriaSource
{
	protected:
	AMateria *storage[4];

	public:

		virtual ~IMateriaSource(){}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria * createMateria(std::string const &type) = 0;
		IMateriaSource();
		IMateriaSource( IMateriaSource const & src );

		IMateriaSource &		operator=( IMateriaSource const & rhs );


};

#endif 