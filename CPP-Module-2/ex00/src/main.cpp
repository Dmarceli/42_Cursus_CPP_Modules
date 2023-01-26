#include "../incs/fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	Fixed x;
	x.setRawBits(120);
	Fixed y; 
	y.setRawBits(110);

	std::cout << "-------------\n";
	std::cout << y.getRawBits() << std::endl;
	std::cout << "-------------\n";
	return 0;

}