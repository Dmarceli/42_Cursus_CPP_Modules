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
		~Animal();

		Animal &operator=( Animal const & src );

	private:
		str type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */