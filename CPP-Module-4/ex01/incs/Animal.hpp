#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

typedef std::string	str;

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();
		Animal &operator=( Animal const & src );
		virtual void makeSound()const;
		str getType()const;
	protected:
		str _type;

};


#endif