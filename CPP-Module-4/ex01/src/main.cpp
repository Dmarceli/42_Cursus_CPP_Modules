#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main() {
	{
		std::cout << "\e[1;35m===========Brain Test===========\033[0m" << std::endl;
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		const Animal	*anm[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				anm[i] = new Dog();
			else
				anm[i] = new Cat();
		}
		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
		for (int i = 0; i < 10; i++)
		{
			std::cout << "Animal: " << anm[i]->getType() << " says: ";
			anm[i]->makeSound();
		}
		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		for (int i = 0; i < 10; i++)
			delete(anm[i]);
	}
	{
		std::cout << "\e[1;35m===========Ideas Test===========\033[0m" << std::endl;
		std::cout << "\e[1;35m===========Constructing===========\033[0m" << std::endl;
		Dog *a = new Dog();
		std::cout << "\e[1;35m===========Testing===========\033[0m" << std::endl;
		a->getBrain()->setIdea(0, "Oh great, another walk. Just what I wanted to do with my time.");
		a->getBrain()->setIdea(1, "The mailman is here. I'm sure he's just as excited to see me as I am to see him.");
		a->getBrain()->setIdea(2, "Yeah, that squirrel is real scary.");
		std::cout << "Idea: " << a->getIdea(0) <<std::endl;
		std::cout << "Idea: " << a->getIdea(1) <<std::endl;
		std::cout << "Idea: " << a->getIdea(2) <<std::endl;
		std::cout << "\e[1;35m===========Testing Deep Copy===========\033[0m" << std::endl;
		Dog b(*a);
		std::cout << "Idea: " << b.getIdea(0) <<std::endl;
		std::cout << "Idea: " << b.getIdea(1) <<std::endl;
		std::cout << "Idea: " << b.getIdea(2) <<std::endl;
		b.getBrain()->setIdea(3, "sou um caozinho");
		std::cout << "Idea: " << b.getIdea(3) <<std::endl;
		std::cout << "Idea: " << a->getIdea(3) <<std::endl;
		std::cout << "\e[1;35m===========Destructing===========\033[0m" << std::endl;
		delete a;
	}
	Dog basic;
	basic.getBrain()->setIdea(0, "olaaa");
	{
		Dog tmp = basic;
		std::cout << "Idea tmp: " << tmp.getIdea(0) <<std::endl;
		tmp.getBrain()->setIdea(1, "adeus");
		std::cout << "Idea Basic: " << basic.getIdea(1) <<std::endl;
	}
} 