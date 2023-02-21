#include "iter.hpp"

int main()
{
	{
		int arr[5] = { 22, 42, 7, 9, 0 };
		iter(arr, sizeof(arr)/ sizeof(*arr), print);
	}
	{
		std::cout << "==|2ND TEST|==="<< std::endl;
		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];
		iter( tab, 5, print );
		iter( tab2, 5, print );
		return 0;
	}
}