// 참조리턴 함수
#include<iostream>
using namespace std;


int& FuncOne(int& a) { // int &a = num1;
	a++; // a ~ 6
	return a;

}
int& FuncTwo(int& a) {
	a++; 
	return a;
}

int main() {
	int num1 = 5;
	//int num2 = FuncOne(num1); // int& num2 = num1;
	//num2++
	int& num2 = FuncOne(num1);
	cout << num1 << " : " << num2 << endl;
	


	return 0;
}