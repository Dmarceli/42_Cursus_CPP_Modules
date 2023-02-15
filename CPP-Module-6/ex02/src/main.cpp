#include "Base.hpp"

int main()
{

	{
		Base* base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	{
		Base *error = new Base;
		identify(*error);
		delete error;
	}
}
