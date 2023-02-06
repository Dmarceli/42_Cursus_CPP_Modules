#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

typedef std::string	str;

class Animal
{
	public:
		virtual ~Animal();
		Animal &operator=( Animal const & src );
		virtual void makeSound()const = 0;
		str getType()const;
		Animal( Animal const & src );
	protected:
		Animal();
		str _type;
};


#endifj