#include<iostream>
using namespace std;
int main() {
	int sum = 0; //지역변수

	[&sum](int x, int y) {sum = x + y; }(2, 3);

	cout << "sum = " << sum << endl;


	return 0;
}