#include <Array.hpp>


int main(void)
{
	{
		Array<int> numbers;
	}
	{	
		Array<int> numbers(10);
		int* mirror = new int[10];
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			const int value = rand() % 100;
			numbers[i] = value;
			mirror[i] = value;
			print(numbers[i], mirror[i]);
		}
		delete[] mirror;
	}
	{
		try{
			Array<int> numbers(10);
			numbers[11] = 10;
		}
		catch ( std::exception& err ) { std::cerr << err.what() << std::endl; }
	}
}