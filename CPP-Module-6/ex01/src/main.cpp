#include <iostream>
#include <sstream>
#include <stdint.h>

struct	Data {
	int	x;
	int	y;
};

uintptr_t	serialize( Data* ptr ) {
	return ( reinterpret_cast<uintptr_t>( ptr ));
}

Data*	deserialize( uintptr_t raw ) {
	return ( reinterpret_cast<Data*>( raw ));
}

int main(void)
{
	Data	a;
	Data *b = NULL;
	
	a.x = 71;
	a.y = 42;

	uintptr_t	ptr;
	ptr = serialize(&a);
	b = deserialize(ptr);
	
	std::cout << ptr << std::endl;
	std::cout << "\033[38;5;13mAddresses:\033[0m" << std::endl;
	std::cout << &a << std::endl;
	std::cout << b << std::endl;
	std::cout << "\033[38;5;13mValues:\033[0m" << std::endl;
	std::cout << "a: " << a.x << ", " << a.y << std::endl;
	std::cout << "b: " << b->x << ", " << b->y << std::endl;
	b->x = 55;
	b->y = 77;
	std::cout << "\033[38;5;13mChanged Values:\033[0m" << std::endl;
	std::cout << "a: " << a.x << ", " << a.y << std::endl;
	std::cout << "b: " << b->x << ", " << b->y << std::endl;
}