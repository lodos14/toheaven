/*

 �־��� main()�� �۵��ϵ��� RectŬ������ �����Ͻÿ�.
 Rect Ŭ������ width, height�� �θ�� ������ 3���� ������,
 �׸��� isSquare()�� �����ϵ��� ����Ͻÿ�.

*/

// Ŭ���� ����

// main


#include<iostream>
using namespace std;

class Rect {
public:
	int width;
	int height;

public:

	Rect() { // �⺻������ - ����ʵ带 �ʱ�ȭ �����ִ� ����
		
		width = height = 1;
	}

	Rect(int x, int y) {
		width = x;
		height = y;
	}
	Rect(int l) {
		width = l;
		height = l;
	}
	

	bool isSquare();

};

bool Rect::isSquare() {
	if (width == height)
		return true;
	else
		return false;

}

int main() {
	Rect r1;
	Rect r2(3, 5);
	Rect r3(3);

	if (r1.isSquare())
		cout << "r1�� ���簢���̴�." << endl;
	if (r2.isSquare())
		cout << "r2�� ���簢���̴�." << endl;
	if (r3.isSquare())
		cout << "r3�� ���簢���̴�." << endl;

	return 0;
}

/*

 ��°��
 r1�� ���簢���̴�.
 r3�� ���簢���̴�.

*/