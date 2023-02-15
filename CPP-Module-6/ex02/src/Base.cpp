#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>

const char*	Base::UnidentifiedObject::what() const throw()
{
	return ("ERROR Base: Unidentified Object");
}

Base *generate()
{
	srand(time(NULL));
	int random_num = rand() % 3;
	std::cout << random_num <<std::endl;
	switch (random_num) 
	{
		case 0: return new A;
		case 1: return new B;
		default: return new C;
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B"<< std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C"<< std::endl;
	else
		throw(Base::UnidentifiedObject());
}

void identify(Base &p)
{
	try{
		identify(&p);
	}
	catch(std::exception &e){std::cout << e.what() << std::endl;}
}