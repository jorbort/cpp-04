#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

class Cure
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();

		Cure &		operator=( Cure const & rhs );

	private:

};

#endif 