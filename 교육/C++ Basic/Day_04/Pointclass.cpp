/*

  �������� => ĸ��ȭ
  - ����ʵ�� �ܺο��� ������ ������� �ʴ´�.
  - ����ʵ�� �Ϲ������� ���� ���Ѵٸ� private ����

*/

#include<iostream>
using namespace std;

class Point {

	int x;
	int y;
public:
	bool initCheck(int xpos, int ypos) {
		// ��ȭ��(0,0 ~ 100,100)
		if ((xpos<0 || xpos >100) || (ypos < 0 || ypos >100) ){
			cout << "��ȭ���� ������ ������ϴ�.\n";
			return false;
		}
		x = xpos;
		y = ypos;
		return true;

	}
	void setX(int x) {
		this->x = x;

	}

	void setY(int y) {
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

};
class Canvas {

	Point upLeft;
	Point downRight;

public:
	bool initCheck(Point left, Point right) {
		if (left.getX() > right.getX() || left.getY() > right.getY()) {

			cout << "�߸��� ��ġ ����" << endl;
			return false;
		}

		upLeft = left;
		downRight = right;
		return true;

	}


	void showCanvas() {
		cout << "�»�[" << upLeft.getX() << "," << upLeft.getY() << "]\n";
		cout << "����[" << downRight.getX() << "," << downRight.getY() << "]\n";
	}

};

int main() {
	Point pos1;
	if (!pos1.initCheck(-2, 4))
		cout << "�ʱ�ȭ ����" << endl;
	if (!pos1.initCheck(2, 4))
		cout << "�ʱ�ȭ ����" << endl;

	return 0;
}