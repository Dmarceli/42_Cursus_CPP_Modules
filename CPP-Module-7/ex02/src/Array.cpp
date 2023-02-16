#include "Array.hpp"

template <typename T>
Array<T>::Array::Array()
{
	this->_array = new T[0];
	this->_size = 0;
	print( "Array default constructor called" );
}

template <typename T>
Array<T>::Array::Array( const Array & src )
{
}
template <typename T>
Array<T>::Array::~Array()
{
}
template <typename T>
Array<T> &Array<T>::operator=( Array const & rhs )
{
	return *this;
}
