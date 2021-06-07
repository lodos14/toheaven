/*

 ������ �����ε�(operator overloading)
 - �����ε� : ������ �̸��� ���� �޼��带 ������ ����� ���
			  ��, �Ű������� ������ �ٸ��ų� ����Ÿ���� �޾ƾ� �Ѵ�.
 - ������ �����ε� : �ϳ��� �����ڸ� ���� �ǹ̷� ����� �� �ְ�
 - ������ �Լ�(operator function)�� ����Ѵ�.
 ����
 operator �����ε��� ������(�Ű�����)

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
		cout << "��(x, y) = (" << xpos << " , " << ypos << ")" << endl;
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

	Point pos3 = pos1 + pos2;   // ���ϱ⸦ �����ϰ� �ϴµ� Point operator 
	//Point pos3 = pos1.operator+(pos2);
	
	pos1.showPosition();
	pos2.showPosition();
	pos3.showPosition();

	return 0;
}
