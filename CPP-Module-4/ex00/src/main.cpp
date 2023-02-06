
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
	{	
		std::cout << "\e[1;35m====================Constructing======================\033[0m" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
			std::cout << "\e[1;35m=====================Testing=========================\033[0m" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << "\e[1;35m====================Deconstructing===================\033[0m" << std::endl;
		delete meta;
		delete i;
		delete j;
	}
	std::cout << "\n\n\e[1;36m====================WrongAnimal======================\033[0m\n\n" << std::endl;
	{
		std::cout << "\e[1;31m====================Constructing======================\033[0m" << std::endl;
		const WrongAnimal* wrgan = new WrongAnimal();
		const WrongAnimal* wrn = new WrongCat();
		std::cout << "\e[1;31m=====================Testing=========================\033[0m" << std::endl;
		std::cout << wrgan->getType() << " " << std::endl;
		std::cout << wrn->getType() << " " << std::endl;
		wrgan->makeSound();
		wrn->makeSound(); //will output the cat sound!
		std::cout << "\e[1;31m====================Deconstructing===================\033[0m" << std::endl;
		delete wrgan;
		delete wrn;
	}
    return 0;
}