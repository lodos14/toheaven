/*

 ���ø�(Template)
 - �Լ��� �����ε��� ������ �����ϱ� ���ؼ� ����
 - �Ȱ��� �̸��� �Լ��� ȿ�������� ���� - �Ϲ�ȭ 
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

	cout << "ū �� = " << big << endl;

	double bigger = max(d, 7);

	cout << "ū �� = " << bigger << endl;

	return 0;
}