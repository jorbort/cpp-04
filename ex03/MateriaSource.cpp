#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i <4; i++)
		if (materias[i])
			delete materias[i];
}

MateriaSource &MateriaSource::operator=( MateriaSource const & rhs )
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4 ; i++)
			materias[i] = rhs.materias[i];
	}
	return *this;
}

AMateria *MateriaSource::getMateria(std::string const &type)
{
	for (int i = 0; i<4; i++)
	{
		if (materias[i] &&  materias[i]->getType() == type)
			return materias[i];
	}
	return (NULL);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
		if (materias[i] == NULL)
		{
			materias[i] = materia;
			return ;
		}
	std::cout << "this materia source is already full and cannot keep more materias" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i <4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return (NULL);
}