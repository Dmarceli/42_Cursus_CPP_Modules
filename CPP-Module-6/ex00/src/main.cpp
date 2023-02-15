#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "1 argument allowed" << std::endl;
		return(0);
	}
	else
		Conversion c(argv[1]);
}