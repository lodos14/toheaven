/*

 템플릿(Template)
 - 함수의 오버로딩의 단점을 보안하기 위해서 생성
 - 똑같은 이름의 함수를 효율적으로 구현 - 일반화 
*/

#include<iostream>
using namespace std;

template<typename T>
T max(T data[], int size){
	T max = data[0];
	for (int i = 1; i < size; i++) {
		if (max < data[i]) max = data[i];

	}

	return max;
}

/*double max(double data[], int size) {
	double max = data[0];
	for (int i = 1; i < size; i++) {
		if (max < data[i]) max = data[i];

	}


}
*/

int main() {
	int arr[] = { 1, 3, 2, 7, 9, 6, 4 };
	double d[] = { 1.2 ,3.7, 2.5, 4.6, 9.3, 10.1, 7.9 };

	int size = sizeof(arr) / sizeof(arr[0]);
	int big = max(arr, size);

	cout << "큰 값 = " << big << endl;

	double bigger = max(d, 7);

	cout << "큰 값 = " << bigger << endl;

	return 0;
}