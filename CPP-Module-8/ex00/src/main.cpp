# include <easyfind.hpp>


int main() 
{
    try 
	{
		std::cout << ORANGE "==Vector==" BLANK << std::endl;
		std::vector<int> vec;
		std::vector<int>::iterator iter;
		for (int i = 0; i <= 5 ; i++)
			vec.push_back(i);

		for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;
		std::cout << *easyfind(vec, 5) << " found"<< std::endl;

    } catch (std::exception &error) {std::cout << error.what() << std::endl;}
	try
	{
		std::cout << PURPLE "==list==" BLANK << std::endl;
		int arr[] = { 29, 31, 37, 41, 43 };
		std::list<int> list(arr, arr + sizeof(arr) / sizeof(arr[0]));

		for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

		std::cout <<*easyfind(list, 41)<<  " found"<<std::endl;
		std::cout <<*easyfind(list, 5)<< std::endl;
	}catch (std::exception &error) {std::cout << error.what() << std::endl;}
}