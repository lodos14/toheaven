#include"Circle.h"

Circle::Circle(int x, int y, int r)
	: Shape(x, y), radius_(r){}


int Circle::radius() const{

	return radius_;
}

double Circle::area() const
{

	return 3.141592 * radius_ * radius_;

}