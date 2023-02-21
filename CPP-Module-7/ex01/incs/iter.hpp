#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, size_t arr_len, void (*func)(T& z)){
	if (!arr || !arr_len|| func == NULL)
		return ;
	for (size_t i = 0; i < arr_len; i++)
		func(arr[i]);		
}

template< typename T >
void print(T x) {std::cout << x << std::endl; return; }

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

#endif