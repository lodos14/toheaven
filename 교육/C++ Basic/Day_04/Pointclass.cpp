/*

  정보은닉 => 캡슐화
  - 멤버필드는 외부에서 접근을 허용하지 않는다.
  - 멤버필드는 일반적으로 접근 제한다를 private 지정

*/

#include<iostream>
using namespace std;

class Point {

	int x;
	int y;
public:
	bool initCheck(int xpos, int ypos) {
		// 도화지(0,0 ~ 100,100)
		if ((xpos<0 || xpos >100) || (ypos < 0 || ypos >100) ){
			cout << "도화지의 범위를 벗어났습니다.\n";
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

			cout << "잘못된 위치 정보" << endl;
			return false;
		}

		upLeft = left;
		downRight = right;
		return true;

	}


	void showCanvas() {
		cout << "좌상[" << upLeft.getX() << "," << upLeft.getY() << "]\n";
		cout << "우하[" << downRight.getX() << "," << downRight.getY() << "]\n";
	}

};

int main() {
	Point pos1;
	if (!pos1.initCheck(-2, 4))
		cout << "초기화 실패" << endl;
	if (!pos1.initCheck(2, 4))
		cout << "초기화 실패" << endl;

	return 0;
}