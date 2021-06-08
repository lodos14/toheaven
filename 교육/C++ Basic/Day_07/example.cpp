/*

 범위 기반 for문
 for(개별변수:집합변수)

*/

#include<iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };

	for (int i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}