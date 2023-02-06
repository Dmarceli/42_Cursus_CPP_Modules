#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

#define IDEANUM 100 

typedef std::string	str;

class Brain
{
	private:
		str _ideas[IDEANUM];

	public:
		Brain();
		Brain( Brain const & src );
		~Brain();
		Brain &		operator=(Brain const &rhs);
		void		setIdea(unsigned int i, std::string idea);
		str			getIdea(unsigned int i);

};


#endif