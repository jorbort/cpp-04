#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
#include "WrongAnimal.hpp"

class WrongCat :  public WrongAnimal
{

	public:
		WrongCat();
		WrongCat(WrongCat const & src );
		WrongCat &operator=(WrongCat const & rhs );
		~WrongCat();

		void makeSound(void) const;
};

#endif 