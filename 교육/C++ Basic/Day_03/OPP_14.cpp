#include<iostream>
using namespace std;

// 배열을 받아서 합을 변환하는 함수
/*int get(int arr[]) {

	int sum = 0;
	for (int i = 0; 1 < 5; i++) {

		cout << i << "정수 = ";
		cin >> arr[i];
		sum += arr[i];

	}
	return sum;

}

int main() {
	int arr[5];
	int sum = 0;

	sum = get(arr);
	

	cout << "배열합 = " << sum << endl;
	return 0;

}
*/


char& find(char s[], int index) {
	return s[index];
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; //name[0]
	cout << name << endl; // Sike

	char& ref = find(name, 2); // name[2]
	ref = 't';
	cout << name << endl; // Site    참조리턴

}

