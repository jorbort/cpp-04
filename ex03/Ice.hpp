#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

class Ice
{

	public:

		Ice();
		Ice( Ice const & src );
		~Ice();

		Ice &		operator=( Ice const & rhs );

	private:

};

#endif 