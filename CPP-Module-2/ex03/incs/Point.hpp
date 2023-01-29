#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

	private:
		Fixed _x;
		Fixed _y;
	public:
		Point( void );
		~Point( void );
		Point( Point const& src );
		Point 	&operator=(const Point &src);
		Point( float const x, float const y );
		Fixed getX();
		Fixed getY();

};

float 	area (Point p1, Point p2, Point p3);
bool 	bsp( Point const a, Point const b, Point const c, Point const point);

#endif