/*

swich(수치 or 값 => 정수형){
case 값1 : 실행문장; break;
case 값2 : 실행문장; break;
case 값n : 실행문장; break;
default : 실행문장;  
}

*/

#include<iostream>
using namespace std;

/*

  주민등록번호: 123456 - abcdefg
  a : 성별 그리고 출생년도
  0 - 9 : 1800
  1 - 2 : 1900
  3 - 4 : 2000

  8번 째 숫자를 입력받아 출생년도와 성별을 판정하는 프로그램
*/

int main() {
	int num, year;
	char gender; // M or F

	cout << " 주민번호 8번 째 숫자 = ";
	cin >> num;

	
	switch (num) {
	case 9: case 0: year = 1800; break;
	case 1: case 2: year = 1900; break;
	case 3: case 4: year = 2000; break;
	default: year = 0000;
	}

	if (year == 0000) {
		cout << "프로그램을 종료합니다.";
		return 0;
	}

	if (num % 2) {// 0(짝수) or 1(홀수)
		// 참일 때 실행되는 문장 : 1
	gender = 'M';
	}

	else {
	gender = 'F';
	}

	cout << "당신의 출생년도는 " << year << "년대 입니다. " << endl;
	cout << "당신의 성별은 " << gender << " 입니다. " << endl;

	return 0;
}