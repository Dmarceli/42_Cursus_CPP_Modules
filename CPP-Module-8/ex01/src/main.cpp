#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp;
		try{
			sp.addNumber(42);
		}
		catch ( std::exception& err ) { std::cerr << err.what() << std::endl; }
	}
	{
		Span sp = Span(10000);
		sp.addNumber(1,10000);
		std::cout << sp;
	}
	return 0;
}