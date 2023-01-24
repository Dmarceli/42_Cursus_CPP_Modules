#include "../incs/fileSwap.hpp"
#include <fstream>
#include <cstdlib>

void ERROR(int indicator)
{
	if (indicator == 0)
		std::cout << "wrong number of arguments" << std::endl;
	else if (indicator == 1)
		std::cout << "Failed to open file" << std::endl;
	else if (indicator == 2)
		std::cout << "Failed to create file" << std::endl;
	exit(1);
}

str replaceText(str text, str old, str replacement)
{
	str output;
	size_t pos = text.find(old);
	while (pos != str::npos)
	{
		text.replace(pos, old.length(), replacement);
		pos = text.find(old, pos + replacement.length());
	}
	return text;
}

str readFile(str filename)
{
	std::ifstream file;
	str output;

	file.open(filename.c_str());
	if (!file.is_open())
		ERROR(1);
	while (file)
		output += file.get();
	file.close();
	output.erase(output.size() - 1);
	return output;
}

void writeToFile(str output, str filename)
{
	std::ofstream file;
	file.open((filename + ".replace").c_str());
	if (!file.is_open())
		ERROR(2);
	file.write(output.c_str(), output.length());
	file.close();
}

int main(int ac, char **av)
{
	if (ac != 4)
		ERROR(0);
	str text = readFile(av[1]);
	str replacement = replaceText(text, av[2], av[3]);
	writeToFile(replacement, av[1]);
}