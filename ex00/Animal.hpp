#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
	std::string type;

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &operator=( Animal const & rhs );
		virtual void makeSound(void) const;
		std::string getType(void) const;
		void setType(std::string type);

};

#endif