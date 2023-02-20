#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <algorithm>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(){};
		MutantStack( MutantStack const & src ) {*this = src;};
		~MutantStack() {};
		MutantStack &		operator=(MutantStack const & src) {
			std::stack<T>::operator=(src);
        	return *this;
		};
		typedef typename std::stack<T>::container_type Container;
		typedef typename Container::iterator iterator;
		iterator begin(void) {return std::stack<T>::c.begin();};
		iterator end(void) {return std::stack<T>::c.end();};

	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */