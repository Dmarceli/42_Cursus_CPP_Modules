#include <Array.hpp>

#define MAX_VAL 750
int main(void)
{
	Array<int> numbers(10);
	int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
}