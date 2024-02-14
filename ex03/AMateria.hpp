#ifndef MATERIA_HPP
# define MATERIA_HPP

# include <iostream>
# include <string>
# include <ICharacter.hpp>

class AMateria
{
	protected:
	std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria( AMateria const & src );
		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif 