#include "MutantStack.hpp"

int	main(void)
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "===|2ND TEST|==="<< std::endl;
	{
		MutantStack<std::string> mstack_str;

		mstack_str.push("one");
		mstack_str.push("two");
		mstack_str.push("three");
		mstack_str.push("four");
		mstack_str.push("five");
		MutantStack<std::string>::iterator it = mstack_str.begin();
		MutantStack<std::string>::iterator ite = mstack_str.end();

		std::cout << mstack_str.top() << std::endl;
		std::cout << mstack_str.size() << std::endl;
	
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return (0);

}
