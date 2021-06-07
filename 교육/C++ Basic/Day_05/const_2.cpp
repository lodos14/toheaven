#include<iostream>
using namespace std;

class SoSimple {
	int num;

public:
	SoSimple(int n) : num(n){}

	SoSimple& AddNum(int n) {
		num += n;

		return *this; // 나의 주소를 넘겨주겠다 그래서 SoSimple&
	}


	void showData() const { // 값을 바꾸지 않는다는 의미
		cout << "num = " << num << endl;

	}

};

int main() {
	SoSimple obj(7);
	obj.AddNum(20);

	obj.showData();


	return 0;
}