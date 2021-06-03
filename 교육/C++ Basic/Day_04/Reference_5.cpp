#include<iostream>
using namespace std;

int& refFuncOne(int& ref) {
	/* int& ref = num1   같은 기억 공간 */
	ref++;
	return ref; // ref의 참조값 리턴
}

int main() {

	int num1 = 1;
	int& num2 = refFuncOne(num1);  // ref의 참조 값을 num2의 참조 값에 넣으면  ref = num1 = num2 

	num1++;
	num2++;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}