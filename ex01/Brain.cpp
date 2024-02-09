#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain built" << std::endl;
	this->size = 0;
	this->ideas[0] = "";
}

Brain::Brain( const Brain & src )
{
	*this = src;
}

Brain::~Brain()
{
	std::cout  << "brain destroyed" << std::endl;
}

Brain &Brain::operator=(Brain const & rhs )
{
	for(int i = 0; i < rhs.getSize(); i++)
		this->ideas[i] = rhs.getIdeas(i);
	return (*this);
}

int Brain::getSize() const
{
	return (size);
}

void Brain::setIdeas(std::string idea)
{
	int i = this->getSize();
	if ( i < 100)
	{
		ideas[i] = idea;
		this->size++;
	}
}

std::string Brain::getIdeas(int i) const
{
	if (i < 0 || i > 100)
		return (NULL);
	return (ideas[i]);
}