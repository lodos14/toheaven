/*

const를 붙인건 변경하지 않겠다는 의미

*/


#include<iostream>
using namespace std;

class Point;

class PointOP {
	int opcnt;


public:
	PointOP() : opcnt(0){}

	Point PointAdd(const Point&, const Point&);
	Point Pointsub(const Point&, const Point&);

	~PointOP() {
		cout << "Operation times : " << opcnt << endl;

	}

};

class Point {
	int x;
	int y;

public:
	Point(const int &xpos, const &ypos) : x(xpos), y(ypos){}

	friend Point PointOP::PointAdd(const Point&, const Point&);         // friend를 해서 접근 가능하게
	friend Point PointOP::Pointsub(const Point&, const Point&);
	friend void showPointPos(const Point&);

};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) {
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::Pointsub(const Point& pnt1, const Point& pnt2) {
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

void showPointPos(const Point& pos) {
	cout << "x = " << pos.x << endl;
	cout << "y = " << pos.y << endl;
}


int main() {
	Point pos1(1, 2);
	Point pos2(2, 4);

	PointOP op;

	showPointPos(op.PointAdd(pos1, pos2));
	showPointPos(op.Pointsub(pos1, pos2));


	return 0;
}
