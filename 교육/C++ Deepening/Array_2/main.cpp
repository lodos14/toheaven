#include<iostream>
#include "array.h"
using namespace std;



int main() {

	int nums1[] = { 1, 2, 3, 4, 5 };
	Array<int> arr1(nums1, 5);

	for (int i = 0; i < arr1.size(); ++i)
		cout << arr1[i] << " ";
	cout << endl;

	double nums2[] = { 1.1, 2.2 , 3.3, 4.4, 5.5 };
	Array<double> arr2(nums2, 5);

	for (int i = 0; i < arr2.size(); ++i)
		cout << arr2[i] << " ";
	cout << endl;

	

	return 0;
}