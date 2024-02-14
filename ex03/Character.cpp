#include "Character.hpp"


Character::Character()
{
	this->name = "";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "string parameter constructor used on character " << this->getName() << std::endl;
}

Character::Character( const Character & src )
{
	*this = src;
	std::cout << "copy constructor used on char" << std::endl;
}

Character::~Character()
{
	int j = 0;
	std::cout << "destroying " << this->getName() << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
	while (this->unequiped[j])
		delete this->unequiped[j];	
}

Character &				Character::operator=( Character const & rhs )
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = rhs.inventory[i];
	}
	return *this;
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << this->getName() << " equipped " << m->getType() << std::endl;
			return ;
		}
	std::cout << this->getName() << " inventory is full and cant equip" << m->getType() << std::endl;	
} 

void Character::unequip(int idx)
{
	static int i = 0;
	if (idx <= 4 && this->inventory[idx] && i < 100)
	{
		this->unequiped[i] = this->inventory[idx];
		this->inventory[idx] = NULL;
		std::cout << this->getName() << "unequiped an item" << std::endl;
	}
	else
		std::cout << "cannot unequip from that inventory slot" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
	else
		std::cout << this->getName() << " cannot use that materia" << std::endl;
}