#pragma once
#include"Shape.h"

class Circle : public Shape {
public:
	Circle(int x, int y, int r);
	// Circle(const Circle& rhs);
	//virtual~Circle();                            // 명시적으로 가상함수 붙여줌
	//Circle& opperator=(const Circle& rhs);

	// get, set....

	int radius() const;

	virtual double area() const;

	

private:

	int radius_;


};
