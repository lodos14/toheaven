#include<iostream>
using namespace std;

class Point {
	int xpos;
	int ypos;

public:

	//Point() {// default ������       
	//	xpos = 0;
	//	ypos = 0;
	//}

	Point(int x = 0, int y = 0) {    // �̷��� �ϸ� ����Ʈ �����ڸ� ��������
		xpos = x;
		ypos = y;
	}

	void disp() {
		cout << "��(x, y) = (" << xpos << " , " << ypos << ")";

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

	// ��ü�迭
	Point p[3] = { Point(), Point(3, 5), Point(10, 20) }; // p[0], p[1], p[2]

	//ap.setX(1);
	//ap.setY(1);
	//ap.init(1, 1)

	// ap.disp();

	//cout << "x��ǥ�� = " << ap.getX() << endl;    // �����̺� ��ǥ���� ����������
	//cout << "y��ǥ�� = " << ap.getY() << endl;

	//ap.disp();
	//bp.disp();
	//cp.disp();

	for (int i = 0; i < 3; i++) {
		p[i].disp();
	}

	return 0;

}