#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal
{

	public:

		Cat();
		Cat(Cat const &src);
		~Cat();
		Cat &operator=(Cat const &src);
		virtual void makeSound(void)const;
	private:

};

#endif