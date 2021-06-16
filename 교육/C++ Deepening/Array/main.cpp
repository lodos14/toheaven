#include<iostream>
#include "array.h"
using namespace std;



int main() {
	
	int nums[] = { 1, 2, 3, 4, 5 };
	Array arr1(nums, 5);
	Array arr2(10);      // Array arr2 = 10;
	Array arr3 = arr1;
	Array arr4;

	//arr4 = 10;  동작은 하는데 모양이 애매함

	arr4 = arr1;

	if (arr1 == arr4)
		cout << "arr1 and arr2 are equal" << endl;
	else
		cout << "arr1 abd arr4 are not equal " << endl;

	for (int i = 0; i < arr1.size(); ++i)
		cout << arr1[i] << ", ";
	cout << endl;

	return 0;
}