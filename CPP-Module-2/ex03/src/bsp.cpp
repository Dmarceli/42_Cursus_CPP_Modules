#include "../incs/Point.hpp"
#include <math.h>

float area (Point p1, Point p2, Point p3)
{
	// Area = 0.5 * |x1(y2 -y3) + x2(y3 - y1) +x3(y1 -y2)|
	float ex1 = p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) ;
	float ex2 = p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat());
	float ex3 = p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat());
	float Area = 0.5 * abs(ex1 + ex2 + ex3);
	return (Area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
 	float Tarea = area(a,b,c);  
	float P_area = area(a,b,point);  
	float P_area1 = area(a,point,c);  
	float P_area2 = area(point,b,c);
	if (Tarea == (P_area1 + P_area2 + P_area))
		return (true);
	else
		return(false);
}