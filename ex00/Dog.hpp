#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

class Dog
{

	public:
		Dog();
		Dog(Dog const & src );
		Dog &operator=( Dog const & rhs );
		
		~Dog();

}; 

#endif 