#include<iostream>
using namespace std;

int main() {
	int num = 12; // 예) 100번지 안에 12값
	int* ptr = &num;  // 포인터 - 주소를 담는다.    ptr은 100번지      * 은 그 주소의 값을 찍어라
	int** dptr = &ptr; // 이중포인터 - 주소에 주소를 담는다.

	int& ref = num;  // 참조변수
	int* (&pref) = ptr; // 포인터 변수를 참조변수로 선언
	int** (&dpref) = dptr; // 이중포인터 참조변수 선언

	cout << "ref = " << ref << endl;
	cout << "*pref = " << *pref << endl;
	cout << "**dpref = " << **dpref << endl;


	return 0;
}