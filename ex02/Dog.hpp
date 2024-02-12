#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
	Brain *brain;

	public:
		Dog();
		Dog(Dog const & src );
		Dog &operator=( Dog const & rhs );
		virtual ~Dog();
		virtual void makeSound(void) const;
		std::string getIdea(int i) const;
		void addIdea(std::string idea);
}; 

#endif 