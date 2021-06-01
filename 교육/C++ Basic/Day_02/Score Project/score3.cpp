/*

 3단계 : 학점을 switch ~ case 문으로 변환하여 구현한다.

*/

#include<iostream>
using namespace std;

int main() {

	int kor, eng, math, tot;
	float avg;
	char grade;

	cout << "kor = ";
	cin >> kor;
	cout << "eng = ";
	cin >> eng;
	cout << "math = ";
	cin >> math;

	tot = kor + eng + math;
	avg = tot / 3.0f;

	switch (int(avg) / 10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}
	
	cout << "총점 : " << tot << " , 평균 : " << avg << endl;
	cout << "학점 : " << grade << endl;

	return 0;
}

