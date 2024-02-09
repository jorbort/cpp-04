#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Dog : public Animal
{

	public:
		Dog();
		Dog(Dog const & src );
		Dog &operator=( Dog const & rhs );
		virtual ~Dog();
		virtual void makeSound(void) const;
}; 

#endif 