#include<iostream>
#include"safeArray.h"
using namespace std;

int main() {

	int nums[] = { 1, 2, 3, 4, 5 };
	Array arr1(nums, 5);


	SafeArray arr2(nums, 5);

	arr1[5] = 6;
	for (int i = 0; i != arr1.size(); ++i) {
		cout << arr1[i];
		cout << ((i < arr1.size() - 1) ? ", " : "");     
	}

	arr2[5] = 6;
	for (int i = 0; i != arr2.size(); ++i) {
		cout << arr2[i];
		cout << ((i < arr2.size() - 1) ? ", " : "");
	}
	return 0;
}