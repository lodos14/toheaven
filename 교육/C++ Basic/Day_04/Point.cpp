#include<iostream>
using namespace std;

class Point {
	int xpos;
	int ypos;

public:

	//Point() {// default 생성자       
	//	xpos = 0;
	//	ypos = 0;
	//}

	Point(int x = 0, int y = 0) {    // 이렇게 하면 디폴트 생성자를 생략가능
		xpos = x;
		ypos = y;
	}

	void disp() {
		cout << "점(x, y) = (" << xpos << " , " << ypos << ")";

	}

	void init(int x, int y) {
		xpos = x;
		xpos = y;

	}

	void setX(int x) { xpos = x; }
	void setY(int y) { ypos = y; }

	int getX() {
		return xpos;
	}

	int getY() {
		return ypos;
	}


};

int main() {

	/*Point ap;
	Point bp(3, 5);
	Point cp(10, 20);*/

	// 객체배열
	Point p[3] = { Point(), Point(3, 5), Point(10, 20) }; // p[0], p[1], p[2]

	//ap.setX(1);
	//ap.setY(1);
	//ap.init(1, 1)

	// ap.disp();

	//cout << "x좌표값 = " << ap.getX() << endl;    // 프라이빗 자표값을 얻어오기위해
	//cout << "y좌표값 = " << ap.getY() << endl;

	//ap.disp();
	//bp.disp();
	//cp.disp();

	for (int i = 0; i < 3; i++) {
		p[i].disp();
	}

	return 0;

}