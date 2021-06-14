/*
조작자(manipulator, 스트림 조작자)
- 입출력 포맷 지정할 목적으로 만들어졌다.
- 항상 << or >>와 함께 사용된다.
- 포맷 플래그 => ios::
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << hex << showbase << 30 << endl; // 0x1e
	cout << dec << showpos << 100 << endl; // +100
	cout << true << ' ' << false << endl; // +1 +0
	cout << boolalpha << true << ' ' << false << endl;

	return 0;
}
