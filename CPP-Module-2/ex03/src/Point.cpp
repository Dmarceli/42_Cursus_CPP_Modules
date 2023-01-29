#include "Point.hpp"

Point::~Point(){}

Point::Point()
{
	_x = 0;
	_y = 0;
}
Point::Point(float x, float y)
{
	_x = x;
	_y = y;
}

Point	&Point::operator=(const Point &src)
{
	this->_x = src._x;
	this->_y = src._y;
	return (*this);
}
Point::Point( Point const& src ) 
{
	this->_x = src._x;
	this->_y = src._y;
}
Fixed Point::getX(){return(this->_x);}

Fixed Point::getY(){return(this->_y);}