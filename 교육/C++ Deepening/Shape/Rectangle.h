#pragma once
#include"Shape.h"


class Rectangle : public Shape {

public:
	Rectangle(int x, int y, int w, int h);

	// Rectangle(const Rectangle& rhs);
	// virtual ~Rectangle();
	// Rectangle& operator=(const Ractangle& rhs);

	// get, set...

	int width() const;
	int height() const;


	virtual double area() const;

private:
	int width_;
	int height_;

};

