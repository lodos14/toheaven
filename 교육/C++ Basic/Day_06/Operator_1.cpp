/*

 연산자 오버로딩(operator overloading)
 - 오버로딩 : 동일한 이름을 가진 메서드를 여러개 만들어 사용
			  단, 매개변수의 개수가 다르거나 리턴타입이 달아야 한다.
 - 연산자 오버로딩 : 하나의 연산자를 여러 의미로 사용할 수 있게
 - 연산자 함수(operator function)를 사용한다.
 형식
 operator 오버로딩할 연산자(매개변수)

*/
#include<iostream>
using namespace std;

class Point {
private :
	int xpos;
	int ypos;

public:
	
	Point(int xpos = 0, int ypos = 0)
		: xpos(xpos), ypos(ypos){}

	void showPosition() const {
		cout << "점(x, y) = (" << xpos << " , " << ypos << ")" << endl;
	}

	Point operator + (const Point& ref) {

		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}

	Point operator -(const Point& ref) {
		Point pos(xpos - ref.xpos, ypos - ref.ypos);
		return pos;
	}
	
};

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);

	Point pos3 = pos1 + pos2;   // 더하기를 가능하게 하는데 Point operator 
	//Point pos3 = pos1.operator+(pos2);
	
	pos1.showPosition();
	pos2.showPosition();
	pos3.showPosition();

	return 0;
}
