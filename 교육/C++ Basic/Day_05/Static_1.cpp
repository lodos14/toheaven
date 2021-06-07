/*

 지정예약어 static
 - 전역변수의 static : 해당 파일에서만 참조를 허용한다는 의미
 - 지역변수의 static : 한번만 초기화되고, 일반적인 지역변수와 
					   달리 함수를 벗어나도 소멸되지 않는다.

*/

#include<iostream>
using namespace std;
// static으로 선언된 변수는 전역변수와 마찬가지로 초기화되지 않으면
// 0으로 초기화 된다.

void counter() {
	static int cnt; // 0
	cnt++;
	cout << "Current cnt = " << cnt << endl;

}


int main() {

	for (int i = 0; i < 10; i++)
		counter();


	return 0;
}

