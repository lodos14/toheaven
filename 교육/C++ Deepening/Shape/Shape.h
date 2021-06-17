#pragma once


class Shape {    // ABC; Abstract Base Class

public:

	explicit Shape(int x = 0, int y = 0);

	// Shape(const Sape& rhs);

	virtual ~Shape(){ }

	// Shape& operator=(const Shape& rhs);
	 
	// Get, set is omitt.

	void move(int x, int y);

	virtual double area() const = 0;      // 자식에서 정의 하겠다

	
	

protected:

	int x_;
	int y_;



};