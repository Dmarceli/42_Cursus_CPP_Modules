#include <Array.hpp>

#define MAX_VAL 750
int main(void)
{
	Array<int> numbers(10);
	int* mirror = new int[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
		print(numbers[i]);
		print(mirror[i]);
    }
	delete[] mirror;
}