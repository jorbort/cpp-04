#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	protected:
	std::string ideas[100];
	int size;
	public:

		Brain();
		Brain(Brain const & src );
		~Brain();

		Brain &operator=( Brain const & rhs );
		int getSize() const;  
		std::string getIdeas(int pos) const; 
		void setIdeas(std::string idea);
};

#endif 