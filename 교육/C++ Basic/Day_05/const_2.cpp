#include<iostream>
using namespace std;

class SoSimple {
	int num;

public:
	SoSimple(int n) : num(n){}

	SoSimple& AddNum(int n) {
		num += n;

		return *this; // ���� �ּҸ� �Ѱ��ְڴ� �׷��� SoSimple&
	}


	void showData() const { // ���� �ٲ��� �ʴ´ٴ� �ǹ�
		cout << "num = " << num << endl;

	}

};

int main() {
	SoSimple obj(7);
	obj.AddNum(20);

	obj.showData();


	return 0;
}