#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
#include "AMateria.hpp"
class MateriaSource
{
	private:
	AMateria *materias[4]; 
	public:

		MateriaSource();
		~MateriaSource();
		MateriaSource( MateriaSource const & src );
		MateriaSource &operator=( MateriaSource const & rhs );

		AMateria *getMateria(std::string const &type);
		AMateria *createMateria(std::string const &type);
		void learnMateria(AMateria *);

};

#endif