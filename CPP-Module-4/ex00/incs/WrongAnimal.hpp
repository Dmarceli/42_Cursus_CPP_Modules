#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

typedef std::string	str;
class WrongAnimal
{
	protected:
		str _type;
	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();
		WrongAnimal &		operator=( WrongAnimal const & rhs );
		virtual void makeSound()const;
		str getType()const;
		

};

#endif