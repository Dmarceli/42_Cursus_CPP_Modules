#include <iostream>
#include <string>

int main(int ac, char **av) {

	std::string str;
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++){
			str = av[i];
			int k = -1;
			while (str[++k])
				std::cout << (char)std::toupper(str[k]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}