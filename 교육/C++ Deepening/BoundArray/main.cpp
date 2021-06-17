#include<iostream>
#include"boundArray.h"
using namespace std;


int main() {
	
	BoundArray arr(6, 10);   

	for (int i = arr.lower(); i < arr.upper(); ++i)
		arr[i] = i;


	for (int i = arr.lower(); i < arr.upper(); ++i)
		cout << arr[i] << " ";
	cout << endl;


	return 0;
}