#include<iostream>
using namespace std;

int main() {

	cout << "hello, world" << endl;

	// cout << "hello, world";
	//cout.operator<<("hello, world");
	operator << (cout, "hello, world");


	//cout << endl;
	cout.operator<<(endl);
	//operator<<(cout, endl);

	::operator<<(cout, "hello world").operator<<(endl);


	return 0;

}