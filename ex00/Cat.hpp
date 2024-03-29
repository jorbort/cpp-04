#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat( Cat const & src );
		Cat &operator=( Cat const & rhs );
		virtual ~Cat();
		virtual void makeSound(void) const;
};

#endif