#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

class ICharacter
{
	private:

	public:
		virtual ~ICharacter() {}
		virtual std::string const &getName() const = 0;
		virtual void eqruip(AMateria *m) = 0;
		virtual void unequip (int idx) = 0;
		virtual void use(int idx, ICharacter & target) = 0; 
		ICharacter();
		ICharacter( ICharacter const & src );
		ICharacter &operator=( ICharacter const & rhs );


};

#endif 