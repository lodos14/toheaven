/*

 

*/

#include<iostream>
using namespace std;

class Point {
public:
	int x;
	int y;

public:
	Point() {// 생성자 메서드 객체를 만들 때 자동 호출 / 매개변수를 가지지 않은 생성자를 디폴트 생성자/ 객체가 만들어 질 때 해야할걸 해줌
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;
	}

	Point(int n) {
		x = y = n;
	}

	Point(float n) {
		x = y = int(n);
	}

	Point(int xpos, int ypos) {
		x = xpos;
		y = ypos;
	}

	void disp();

};

void Point::disp() {

	cout << "점(x, y) = (" << x << " , " << y << ")" << endl;

}
/*

 생성자와 소멸자
 생성자
 - 객체(instance)를 생성할 때 자동으로 호출되는 메서드
 - 생성자가 존재하지 않을 경우 디폴트 생성자가 생략된 것임
 - 멤버필드를 초기화할 때, 객체를 생성한 후 실행할 내용이 있을 때
 - 클래스명과 동일하며, 결과형 리턴값이 없다.
 - 메서드 오버로딩이 가능하다.
 - 디폴트 매개변수를 사용할 수 있다.
 - 생성자는 객체가 생성될 때 오직 한 번만 호출된다.

 소멸자
 - 객체가 소멸될 때 자동으로 호출되는 메서드
 - 클래스명과 동일하나 생성자와 구별하기 위해 틸드(~)를 붙인다.
 - 클래스마다 소멸자는 오직 하나만 존재한다.(오버로딩 불가)

*/

int main() {
	Point ap(5);
	/*ap.x = 1;
	ap.y = 1;*/
	/*cout << "x = ";
	cin >> ap.x;
	cout << "y = ";
	cin >> ap.y;*/

	ap.disp();


	return 0;
}