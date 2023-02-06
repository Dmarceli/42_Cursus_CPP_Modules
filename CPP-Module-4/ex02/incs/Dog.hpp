#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{

	public:

		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &		operator=(Dog const &src);
		virtual void makeSound(void)const;
		void		setIdea(unsigned int i, std::string idea);
		str			getIdea(unsigned int i);
		Brain*		getBrain( void ) const { return ( this->_Brain ); }
	private:
		Brain *_Brain;
};

#endif