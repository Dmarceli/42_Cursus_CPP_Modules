#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
#include <cstdlib>
#include <fstream>

#define MAX_VAL 750

template <typename T>
class Array
{

	public:

		Array()
		{
			this->_array = new T[0];
			this->_size = 0;
		}
		Array( unsigned int size )
		{
			this->_array = new T[size];
			this->_size = size;

		}
		Array( Array const & src )
		{
			this->_size = src._size;
			this->_array = new T[_size];
			for (int i = 0; i < _size; i++)
				this->_array[i] = src._array[i]; }
		~Array(){delete [] this->_array;}
		Array &		operator=( Array const & src )
		{
			this->_size = src._size;
			this->_array = new T[_size];
			for (int i = 0; i < _size; i++)
				this->_array[i] = src._array[i];
			return(*this);
		}
		T&		operator[]( unsigned int n ) throw(std::exception){
			if (n > _size)
				throw(OutOfBoundsException());
			else
				return (_array[n]);
		}
		class OutOfBoundsException : public std::exception {
			public:
				char const*	what( void ) const throw(){
					return("Index Out Of Bounds!");
				};
		};
		unsigned int	size( void ) const{return(this->_size);}
	private:
		T*				_array;
		unsigned int	_size;
};

template< typename T >
void print(T x) {std::cout << x << std::endl; return; }


template< typename T >
void print(T x, T y) {std::cout << x << ", " << y <<std::endl; return; }

#endif