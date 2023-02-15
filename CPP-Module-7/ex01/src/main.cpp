#include "iter.hpp"

int main()
{
	int arr[5] = { 22, 42, 7, 9, 0 };
	iter(arr, sizeof(arr)/ sizeof(*arr), print); 
}