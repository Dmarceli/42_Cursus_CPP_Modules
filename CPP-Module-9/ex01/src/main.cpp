#include "RPN.hpp"

//https://mathworld.wolfram.com/ReversePolishNotation.html

int main(int ac, char**av)
{
	if (ac == 2 && av[1][0])
	{
		RPN trio(av[1]);
		return(0);
	}
	std::cout << "\tError!\n->Usage: ./RPN 'inverted Polish mathematical expression'\n";
	return (1);
}